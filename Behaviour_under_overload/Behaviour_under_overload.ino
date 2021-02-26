#include <Arduino_FreeRTOS.h>

int err=0;

void task1(void *pvParameters);
void task2(void *pvParameters);
void task3(void *pvParameters);

unsigned long time1;
unsigned long time2;
unsigned long time3;
unsigned long onesecmicros = 1000000;

TickType_t xLastWakeTime;
TickType_t xonesec;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Create");
  xTaskCreate(task1,"task1", 128, NULL, 3, NULL);
  xTaskCreate(task2, "task2", 128, NULL, 2, NULL);
  xTaskCreate(task3, "task3", 128, NULL, 1, NULL);
  xLastWakeTime = xTaskGetTickCount();
  vTaskStartScheduler();
}

void loop() {
  // feito nas tasks
  if(err==1){
    Serial.println("End");
    err=0;
  }
}

void task1( void *pvParameters ) {
  //(void) pvParameters;
  int sensorValue;
  unsigned long freq1=100000;
  unsigned long bound1;
  int aux1 = 0;
  const TickType_t xFrequency = ( 100 / portTICK_PERIOD_MS );
  TickType_t xLastWakeTime1;
  xLastWakeTime1 = xTaskGetTickCount();
  while(1){
    vTaskDelayUntil( &xLastWakeTime1, xFrequency );
    sensorValue = analogRead(A0);
  
    Serial.print("Time1: ");
    time1 = micros();
    bound1 = onesecmicros+(aux1*freq1);
    Serial.println(time1);
     
    if (time1 > (bound1)){
      err=1;
      vTaskSuspend (NULL);
    }
    aux1 = aux1 + 1;
  }
  }


void task2( void *pvParameters ) {
  //(void) pvParameters;
  int sensorValue;
  unsigned long freq2=100000; 
  unsigned long bound2;
  int aux2 = 0;
  const TickType_t xFrequency = ( 100 / portTICK_PERIOD_MS );
   TickType_t xLastWakeTime2;
  xLastWakeTime2 = xTaskGetTickCount(); 
  while(1){
    vTaskDelayUntil( &xLastWakeTime2, xFrequency );
    sensorValue = analogRead(A0);
  
    Serial.print("Time2: ");
    time2 = micros();
    bound2 = onesecmicros+(aux2*freq2);
    Serial.println(time2);
    if(time2 > (bound2)){
        err=1;
        vTaskSuspend (NULL);
    }

      aux2 = aux2 + 1;
  }
}

void task3( void *pvParameters ) {
  //(void) pvParameters;
  int sensorValue;
  unsigned long freq3=100000;
  unsigned long bound3;
  int aux3 = 0;
  const TickType_t xFrequency = ( 100 / portTICK_PERIOD_MS );
   TickType_t xLastWakeTime3;
  xLastWakeTime3 = xTaskGetTickCount();
  while(1){
    vTaskDelayUntil( &xLastWakeTime3, xFrequency );
    sensorValue = analogRead(A0);
 
    Serial.print("Time3: ");
    time3 = micros();
    bound3 = onesecmicros+(aux3*freq3);
    Serial.println(time3);
    if (time3 > (bound3)){
      err=1;
      vTaskSuspend(NULL);
    }
    aux3 = aux3 +1;

  }
}
