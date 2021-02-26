#include <Arduino_FreeRTOS.h>

void task1( void *pvParameters );

void setup() {
  // put your setup code here, to run once:
  xTaskCreate(task1, "task1", 64, NULL, 1, NULL); 
  xTaskCreate(task1, "task2", 64, NULL, 1, NULL);
  xTaskCreate(task1, "task3", 64, NULL, 1, NULL);
  xTaskCreate(task1, "task4", 64, NULL, 1, NULL);
  xTaskCreate(task1, "task5", 64, NULL, 1, NULL);
  xTaskCreate(task1, "task6", 64, NULL, 1, NULL);
  xTaskCreate(task1, "task7", 64, NULL, 1, NULL);
  xTaskCreate(task1, "task8", 64, NULL, 1, NULL);
  xTaskCreate(task1, "task9", 64, NULL, 1, NULL);
  xTaskCreate(task1, "task10", 64, NULL, 1, NULL);
  xTaskCreate(task1, "task11", 64, NULL, 1, NULL);
  xTaskCreate(task1, "task12", 64, NULL, 1, NULL);
  xTaskCreate(task1, "task13", 64, NULL, 1, NULL);
  xTaskCreate(task1, "task14", 64, NULL, 1, NULL);
  xTaskCreate(task1, "task15", 64, NULL, 1, NULL); 
  xTaskCreate(task1, "task16", 64, NULL, 1, NULL);
  xTaskCreate(task1, "task17", 64, NULL, 1, NULL);
  xTaskCreate(task1, "task18", 64, NULL, 1, NULL);
  xTaskCreate(task1, "task19", 64, NULL, 1, NULL);
  xTaskCreate(task1, "task20", 64, NULL, 1, NULL);
  xTaskCreate(task1, "task21", 64, NULL, 1, NULL);
  xTaskCreate(task1, "task22", 64, NULL, 1, NULL);
  xTaskCreate(task1, "task23", 64, NULL, 1, NULL);
  xTaskCreate(task1, "task24", 64, NULL, 1, NULL);
  xTaskCreate(task1, "task25", 64, NULL, 1, NULL);
  xTaskCreate(task1, "task26", 64, NULL, 1, NULL);


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
