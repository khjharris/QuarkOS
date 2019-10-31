#include <stdlib.h>

void message(uint32_t ring);
void kern_launch(void* device_tree, void *kern_ptr );
void dt_launch(void *device_tree);
void err_fail(const char *error);
void main_ring10();
void main_ring1();
void enter_ring1();
 
void main() {

  //set as lowest ring-> dont have ring1 yet
  uint32_t ring = 0;
  message(ring);
	  
}

//sets up system device tree
void dt_launch(void *device_tree) {

  int check = image_access(device_tree);

  if(check != 1) {
    err_fail("Device tree invalid\n");
  }

}

//init message for our hypervisor
void message(uint32_t ring) {

  printf("Initializing hypervisor\n");
  printf("PEGASAUR LAUNCHED\n");

}


//user level ring entry
void main_ring1(){
  int checkl;
  size_t k_size;
  void *kern_loc;
  void *ram_ptr;

}

void err_fail(const char *error) {
  printf("Fatal Failure: %s\n", error);
  
  if(reboot() =! 1) {
    printf("REBOOT FAILED\n");
    while(1);
  }
}

//enter user level
void enter_ring1(){}


//kernel/hypervisor ring entry
void main_ring0(){}


//On fatal error tries to reboot, on a second failture it remains in this state



void reboot(){
  //reboot the whole system on a failure

}
