#include <iostream>    // Include the input/output stream library for standard I/O operations
#include <unistd.h>    // Include the library for system calls like sleep
#include <chrono>      // Include the library for working with time durations

using namespace std;  // Use the standard namespace

// Class to limit requests to [x] requests per [y] seconds
class RequestLimiter {
  private:
   int x;                     // Maximum number of requests
   int y;                     // Time period in seconds
   chrono::steady_clock::time_point last_request_time;  // Time of the last request

  public:
    // Constructor to initialize the limiter with given [x] and [y]
    RequestLimiter(int x, int y) : x(x), y(y) {
        last_request_time = chrono::steady_clock::now();  // Initialize last request time
    }
    
    // Check if a request should be processed based on the rate limit
    bool handle() {
        // Get the current time
        chrono::steady_clock::time_point current_time = chrono::steady_clock::now();

        // Calculate the time difference in seconds since the last request
        chrono::duration<double> time_diff = chrono::duration_cast<chrono::seconds>(current_time - last_request_time);

        // If enough time has passed, allow the request and update the last request time
        if (time_diff.count() >= (1.0 / y)) {
            last_request_time = current_time;
            return true;   // Allow the request
        }

        return false;  // Rate limit exceeded, deny the request
    }
};

// Function to process requests with the given limiter, delay, and number of requests
void process_requests(RequestLimiter& limiter, int delay_secs, int num_requests) {
    static int request_num = 0;  // Counter for the request number
  
    sleep(delay_secs);  // Sleep for the specified delay

    // Process the specified number of requests
    for (int i = 0; i < num_requests; i++) {
        // Print the request number and whether it's allowed or not based on the limiter
        cout << "Process request #" << ++request_num << ": " << (limiter.handle() ? "Yes" : "No") << std::endl;
    }
}

// Function to run the scenario with the given limiter and test cases
void run_scenario() {
    RequestLimiter limiter(1, 1);  // Set up to limit requests to one per second
    process_requests(limiter, 0, 1);  // Initial request
    process_requests(limiter, 1, 1);  // A new request after 1 second
    process_requests(limiter, 2, 4);  // 4 more requests after 2 more seconds
}

// Main function
int main() {
    run_scenario();  // Run the scenario
    return 0;  // Return 0 to indicate successful program execution
}
