#include <stdio.h>
#include "pico/stdlib.h"
#include "pico/cyw43_arch.h"

/**
 * @brief Programa principal
*/
int main(void) {
  // Inicializo el USB
  stdio_init_all();
  int cuentaon = 0;
  int cuentaoff = 0;
  if (cyw43_arch_init()) {
        printf("Wi-Fi init failed");
        return -1;
    }

  // Mensaje por USB
  printf("\nHola mundo!\n");

  while (true) {
    // Prendo LED
    cyw43_arch_gpio_put(CYW43_WL_GPIO_LED_PIN, 1);
    // Mensaje por USB
    printf("LED prendido\n");
    cuentaon=(cuentaon+1);
    printf("encendidos = %d\n", cuentaon);
    // Demora
    sleep_ms(1000);
    // Apago LED
    cyw43_arch_gpio_put(CYW43_WL_GPIO_LED_PIN, 0);
    // Mensaje por USB
    printf("LED apagado\n");
    cuentaoff=(cuentaoff+1);
    printf("apagados = %d\n", cuentaoff);
    // Demora
    sleep_ms(500);
  }
  return 0;
}