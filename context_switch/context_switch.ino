#include <Arduino_FreeRTOS.h>


unsigned long timeprev = 0;
unsigned long timeaft = 0;
unsigned long timechange = 0;

int x = 200;

TaskHandle_t xTask1Handle;
TaskHandle_t xTask2Handle;
TaskHandle_t xTask3Handle;
TaskHandle_t xTask4Handle;
TaskHandle_t xTask5Handle;

void Task1( void *pvParameters );
void Task2( void *pvParameters );
void Task3( void *pvParameters );
void Task4( void *pvParameters );
void Task5( void *pvParameters );

TickType_t xLastWakeTime;
TickType_t xonesec;


int contador = 100;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Start");
  xTaskCreate(task1,"task1",128,NULL,1,&xTask1Handle);
  xTaskCreate(task2,"task2",128,NULL,2,&xTask2Handle);
  xTaskCreate(task3,"task3",128,NULL,3,&xTask3Handle);
  xTaskCreate(task4,"task4",128,NULL,4,&xTask4Handle);
  xTaskCreate(task5,"task5",128,NULL,5,&xTask5Handle);
  xLastWakeTime = xTaskGetTickCount();
  xonesec = (1000 / portTICK_PERIOD_MS);
  
  
  Serial.println("*******");
  vTaskStartScheduler();
}

void loop(){
 
}

void task1(void *pvParameters){
 
  
  const TickType_t xFrequency1 = (x / portTICK_PERIOD_MS);
  TickType_t xLastWakeTime1;
  xLastWakeTime1 = xTaskGetTickCount();
  vTaskDelayUntil( &xLastWakeTime1, xonesec);
  while(1){
    //Serial.println("t1");
    timeaft = micros();
    timechange= timeaft - timeprev;
    Serial.println(timechange);
    
    timeprev = micros();
    vTaskDelayUntil( &xLastWakeTime1, xFrequency1 );
    //xLastWakeTime1 = xTaskGetTickCount();
  }
}

void task2(void *pvParameters){
  
  const TickType_t xFrequency2 = (x / portTICK_PERIOD_MS);
  TickType_t xLastWakeTime2;
  xLastWakeTime2 = xTaskGetTickCount();
  vTaskDelayUntil( &xLastWakeTime2, xonesec);
  while(1){
    //Serial.println("t1");
    timeaft = micros();
    timechange= timeaft - timeprev;
    Serial.println(timechange);
    
    timeprev = micros();
    vTaskDelayUntil( &xLastWakeTime2, xFrequency2 );
    //xLastWakeTime1 = xTaskGetTickCount();
  }
}

void task3(void *pvParameters){
  
  const TickType_t xFrequency3 = (x / portTICK_PERIOD_MS);
  TickType_t xLastWakeTime3;
  xLastWakeTime3 = xTaskGetTickCount();
  vTaskDelayUntil( &xLastWakeTime3, xonesec);
  while(1){
    //Serial.println("t1");
    timeaft = micros();
    timechange= timeaft - timeprev;
    Serial.println(timechange);
    
    timeprev = micros();
    vTaskDelayUntil( &xLastWakeTime3, xFrequency3 );
    //xLastWakeTime1 = xTaskGetTickCount();
  }
}

void task4(void *pvParameters){
  
  const TickType_t xFrequency4 = (x / portTICK_PERIOD_MS);
  TickType_t xLastWakeTime4;
  xLastWakeTime4 = xTaskGetTickCount();
  vTaskDelayUntil( &xLastWakeTime4, xonesec);
  while(1){
    //Serial.println("t1");
    timeaft = micros();
    timechange= timeaft - timeprev;
    Serial.println(timechange);
    
    timeprev = micros();
    vTaskDelayUntil( &xLastWakeTime4, xFrequency4 );
    //xLastWakeTime1 = xTaskGetTickCount();
  }
}

void task5(void *pvParameters){
  
  const TickType_t xFrequency5 = (x / portTICK_PERIOD_MS);
  TickType_t xLastWakeTime5;
  xLastWakeTime5 = xTaskGetTickCount();
  vTaskDelayUntil( &xLastWakeTime5, xonesec);
  while(1){
    //Serial.println("t1");
    timeaft = micros();
    timechange= timeaft - timeprev;
    Serial.println(timechange);
    
    timeprev = micros();
    vTaskDelayUntil( &xLastWakeTime5, xFrequency5 );
    //xLastWakeTime1 = xTaskGetTickCount();
  }
}
