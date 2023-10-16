#include <iostream>
#include <unistd.h>
#include <chrono>
using namespace std;

/** This class limits requests to [x] requests per [y] seconds. */
class RequestLimiter {
  private:
   int x;
   int y;

  public:
    RequestLimiter(int x, int y) : x(x), y(y) {
      
    }
    
    
/** returns true if, and only if, the request should be processed */
    bool handle() {
 
    }
};

// Test code 
void process_requests(RequestLimiter& 
limiter
, int delay_secs, int num_requests) {
  static int request_num = 0;
  
  sleep(delay_secs);
  
  for (int i = 0; i<num_requests; i++) {
    cout << "Process request #" << ++
request_num
 << ": "
      << (limiter.handle() ? "Yes" : "No") 
<<
 std::endl;
  }
}

// Test code
void run_scenario() {
  
// Set up to limit requests to one per second.
  RequestLimiter limiter(1, 1);
    
  // Initial request.
  process_requests(limiter, 0, 1);
  
  // A new request after 1 seconds.
  process_requests(limiter, 1, 1);
  
  // 4 more requests after 2 more seconds.
  process_requests(limiter, 2, 4);
}

int main() {
  run_scenario();
  return 0;
}
