#include <Arduino_FreeRTOS.h>

void task1( void *pvParameters );

void setup() {
  // put your setup code here, to run once:
  xTaskCreate(task1, "task1", 128, NULL, 1, NULL); 
  xTaskCreate(task1, "task2", 128, NULL, 1, NULL);
  xTaskCreate(task1, "task3", 128, NULL, 1, NULL);
  xTaskCreate(task1, "task4", 128, NULL, 1, NULL);
  xTaskCreate(task1, "task5", 128, NULL, 1, NULL);
  xTaskCreate(task1, "task6", 128, NULL, 1, NULL);
  xTaskCreate(task1, "task7", 128, NULL, 1, NULL);
  xTaskCreate(task1, "task8", 128, NULL, 1, NULL);
  xTaskCreate(task1, "task9", 128, NULL, 1, NULL);
  xTaskCreate(task1, "task10", 128, NULL, 1, NULL);
  xTaskCreate(task1, "task11", 128, NULL, 1, NULL);
  xTaskCreate(task1, "task12", 128, NULL, 1, NULL);
  xTaskCreate(task1, "task13", 128, NULL, 1, NULL);
  xTaskCreate(task1, "task13", 128, NULL, 1, NULL);
  vTaskStartScheduler();
 

}

void loop() {
  // feito nas tasks

}

void task1( void *pvParameters ) {
  (void) pvParameters;
  
  pinMode(LED_BUILTIN, OUTPUT);


  for(;;) {
    digitalWrite(10, HIGH); //turn the led on
    vTaskDelay( 1000 / portTICK_PERIOD_MS); //wait a sec
    digitalWrite(10, LOW); //turn the led off
    vTaskDelay( 1000 / portTICK_PERIOD_MS); // wait a sec
  }
}
