// http://stackoverflow.com/questions/20762056/stm32f4-g-error-involving-newlib-kill-r-kill-getpid-r-getpid

extern "C" int _getpid(void) {
  return 1;
}

extern "C" void _kill(int pid) { while(1) ; }
