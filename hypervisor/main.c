#include <stdlib.h>

void message(uint32_t ring);
void kern_launch(void* device_tree, void *kern_ptr );
void dt_launch(void *device_tree);
  void err_fail(const char *error);
  
void main() {

  //set as lowest ring-> dont have ring1 yet
  uint32_t ring = 0;
  message(ring);
	  
}




void dt_launch(void *device_tree) {

  int check = image_access(device_tree);

  if(check != 1) {
    err_fail("Device tree invalid\n");
  }

}

void message(uint32_t ring) {

  printf("Initializing hypervisor\n");
  printf("PEGASAUR LAUNCHED\n");

}

void err_fail(const char *error) {
  printf("Fatal Failure: %s\n", error);

  //try reboot, if failed stay here
  if(reboot() =! 1) {
    printf("REBOOT FAILED\n");
    while(1);
  }
}


void reboot(){
  //reboot the whole system on a failure

}
