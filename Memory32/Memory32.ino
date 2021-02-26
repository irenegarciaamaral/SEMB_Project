#include <Arduino_FreeRTOS.h>

void task1( void *pvParameters );

void setup() {
  // put your setup code here, to run once:
  xTaskCreate(task1, "task1", 32, NULL, 1, NULL); 
  xTaskCreate(task1, "task2", 32, NULL, 1, NULL);
  xTaskCreate(task1, "task3", 32, NULL, 1, NULL);
  xTaskCreate(task1, "task4", 32, NULL, 1, NULL);
  xTaskCreate(task1, "task5", 32, NULL, 1, NULL);
  xTaskCreate(task1, "task6", 32, NULL, 1, NULL);
  xTaskCreate(task1, "task7", 32, NULL, 1, NULL);
  xTaskCreate(task1, "task8", 32, NULL, 1, NULL);
  xTaskCreate(task1, "task9", 32, NULL, 1, NULL);
  xTaskCreate(task1, "task10", 32, NULL, 1, NULL);
  xTaskCreate(task1, "task11", 32, NULL, 1, NULL);
  xTaskCreate(task1, "task12", 32, NULL, 1, NULL);
  xTaskCreate(task1, "task13", 32, NULL, 1, NULL);
  xTaskCreate(task1, "task14", 32, NULL, 1, NULL);
  xTaskCreate(task1, "task15", 32, NULL, 1, NULL); 
  xTaskCreate(task1, "task16", 32, NULL, 1, NULL);
  xTaskCreate(task1, "task17", 32, NULL, 1, NULL);
  xTaskCreate(task1, "task18", 32, NULL, 1, NULL);
  xTaskCreate(task1, "task19", 32, NULL, 1, NULL);
  xTaskCreate(task1, "task20", 32, NULL, 1, NULL);
  xTaskCreate(task1, "task21", 32, NULL, 1, NULL);
  xTaskCreate(task1, "task22", 32, NULL, 1, NULL);
  xTaskCreate(task1, "task23", 32, NULL, 1, NULL);
  xTaskCreate(task1, "task24", 32, NULL, 1, NULL);
  xTaskCreate(task1, "task25", 32, NULL, 1, NULL);
  xTaskCreate(task1, "task26", 32, NULL, 1, NULL);
  xTaskCreate(task1, "task27", 32, NULL, 1, NULL);
  xTaskCreate(task1, "task28", 32, NULL, 1, NULL);
  xTaskCreate(task1, "task29", 32, NULL, 1, NULL); 
  xTaskCreate(task1, "task30", 32, NULL, 1, NULL);
  xTaskCreate(task1, "task31", 32, NULL, 1, NULL);
  xTaskCreate(task1, "task32", 32, NULL, 1, NULL);
  xTaskCreate(task1, "task33", 32, NULL, 1, NULL);
  xTaskCreate(task1, "task34", 32, NULL, 1, NULL);
  xTaskCreate(task1, "task35", 32, NULL, 1, NULL);
  xTaskCreate(task1, "task36", 32, NULL, 1, NULL);
  xTaskCreate(task1, "task37", 32, NULL, 1, NULL);
  xTaskCreate(task1, "task38", 32, NULL, 1, NULL);
  xTaskCreate(task1, "task39", 32, NULL, 1, NULL);
  xTaskCreate(task1, "task40", 32, NULL, 1, NULL);
  xTaskCreate(task1, "task41", 32, NULL, 1, NULL);
  xTaskCreate(task1, "task42", 32, NULL, 1, NULL);
  xTaskCreate(task1, "task43", 32, NULL, 1, NULL);
  xTaskCreate(task1, "task44", 32, NULL, 1, NULL);
  xTaskCreate(task1, "task45", 32, NULL, 1, NULL);
  xTaskCreate(task1, "task46", 32, NULL, 1, NULL);
  xTaskCreate(task1, "task47", 32, NULL, 1, NULL);
  xTaskCreate(task1, "task48", 32, NULL, 1, NULL);
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
