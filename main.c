#include "pico/stdlib.h"
#include "hardware/gpio.h"

const uint LED_PIN=25; // светодиод на малинке 2040 подключен к выводу 25

int main(){
    gpio_init(LED_PIN);  //включает вывод
    gpio_set_dir(LED_PIN, GPIO_OUT); // задает направление, ГПИО_ОУТ - вывод выдает напряжение а не считывает его
    while(1){
        gpio_put(LED_PIN, 1);
        sleep_ms(500);
        gpio_put(LED_PIN, 0);
        sleep_ms(100);
        gpio_put(LED_PIN, 1);
        sleep_ms(5000);
        gpio_put(LED_PIN, 0);
        sleep_ms(100);
        gpio_put(LED_PIN, 1);
        sleep_ms(2000);
        gpio_put(LED_PIN, 0);
        sleep_ms(100);
        gpio_put(LED_PIN, 1);
        sleep_ms(500);
        gpio_put(LED_PIN, 0);
        sleep_ms(100);
        gpio_put(LED_PIN, 1);
        sleep_ms(5000);
        gpio_put(LED_PIN, 0);
        sleep_ms(100);
        gpio_put(LED_PIN, 1);
        sleep_ms(500);
        gpio_put(LED_PIN, 0);
        sleep_ms(100);
        gpio_put(LED_PIN, 1);
        sleep_ms(5000);
        gpio_put(LED_PIN, 0);
        sleep_ms(100);
    }


}