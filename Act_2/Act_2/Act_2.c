#include <stdio.h>
#include "pico/stdlib.h"

/**
 * @brief Programa principal
 */
int main(void)
{
    // Inicializo el USB
    stdio_init_all();
    // Demora para esperar la conexion
    sleep_ms(1000);

    // Inicializacion de GPIO con gpio_init()
    int a=0;
    /* Habilito el GPIO25 (LED)
    gpio_init(PICO_DEFAULT_LED_PIN);
    GPIO25 como salida
    gpio_set_dir(PICO_DEFAULT_LED_PIN, GPIO_OUT);
    Configuracion de entrada/salida con gpio_set_dir()

    */
    gpio_init(22);
    gpio_set_dir(22, GPIO_OUT);
    gpio_init(8);
    gpio_set_dir(8, GPIO_IN);

    while (true)
    {

        /* Prendo LED
        gpio_put(PICO_DEFAULT_LED_PIN, 1);

        */
        a=gpio_get(8);
        if(a==1){
            gpio_put(22, 1);
        }
        else{
            gpio_put(22, 0);
        }

        // Resolver logica para GPIO20 -> GPIO6

        // Resolver logica para GPIO21 -> GPIO7

        // Resolver logica para GPIO22 -> GPIO8
    }
    return 0;
}