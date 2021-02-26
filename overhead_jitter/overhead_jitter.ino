#include <Arduino_FreeRTOS.h>

int err = 0;

unsigned long timepassed;
unsigned long onesecmicros = 970000;
unsigned long terro = 0;

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

float kilo = 1;
float kilo1 = 32 * kilo;
float kilo2 = 19 * kilo;
float kilo3 = 14 * kilo;
float kilo4 = 5 * kilo;
float kilo5 = 3 * kilo;

int contador=5;

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
  //xLastWakeTime = xLastWakeTime + xonesec;
  // +  (1000 / portTICK_PERIOD_MS)
  timepassed = micros();
  Serial.println("timepassed");
  Serial.println(timepassed);
  

  vTaskStartScheduler();
}

void loop(){
  
  if(err==1){
    Serial.println("fim");
    err=0;
  }
}

void task1(void *pvParameters){
  
  unsigned long tteste = 0;
  unsigned long tciclo = 0;
  unsigned long freq1 = 2000000;
  unsigned long bound1;
  float fp;
  
  int aux1 = 1;
  float cycle1 = 1000 * kilo1;
  
  int x = 2000;
  const TickType_t xFrequency1 = (x / portTICK_PERIOD_MS);
  TickType_t xLastWakeTime1;
  
  tteste=micros();
  Serial.println("tteste1");
  Serial.println(tteste);
  xLastWakeTime1 = xTaskGetTickCount();
  vTaskDelayUntil( &xLastWakeTime1, xonesec);
  while(1){
    Serial.println("t1");
    if(contador==aux1){
      Serial.print("tempo: ");
      terro=micros();
      Serial.println(terro);
      Serial.end();
    }
    while(cycle1>0){
      fp=0.5+0.5;
      cycle1 = cycle1 - 1;
    }
    cycle1=1000 * kilo1;
    
    tciclo=micros();
    //Serial.print("tciclo1:");
    //Serial.println(tciclo);
    //bound1 = onesecmicros+(aux1*freq1);
    bound1= ((tciclo - onesecmicros) / freq1);
    Serial.println("bound1");
    Serial.println(bound1);
    Serial.println("aux1");
    Serial.println(aux1);
    if (aux1<bound1){
      Serial.print("deu erro:");
      terro=micros();
      Serial.println(terro);
      Serial.end();
      err=1;
      vTaskEndScheduler ();
    }
    
    aux1 = aux1 +1;
    vTaskDelayUntil( &xLastWakeTime1, xFrequency1 );
  }
}

void task2(void *pvParameters){
  
  unsigned long tteste = 0;
  unsigned long tciclo = 0;
  unsigned long freq2 = 1200000;
  unsigned long bound2;
  float fp;
  
  int aux2 = 1;
  float cycle2=1000 * kilo2;
  
  int x = 1200;
  const TickType_t xFrequency2 = (x / portTICK_PERIOD_MS);
  TickType_t xLastWakeTime2;
  
  tteste=micros();
  Serial.println("tteste2");
  Serial.println(tteste);
  xLastWakeTime2 = xTaskGetTickCount();
  vTaskDelayUntil( &xLastWakeTime2, xonesec);
  while(1){
    Serial.println("t2");
    while(cycle2>0){
      fp=0.5+0.5;
      cycle2 = cycle2 - 1;
    }
    cycle2=1000 * kilo2;
    
    tciclo=micros();
    //Serial.print("tciclo2:");
    //Serial.println(tciclo);
    //bound2 = onesecmicros+(aux2*freq2);
    bound2= ((tciclo - onesecmicros) / freq2);
    Serial.println("bound2");
    Serial.println(bound2);
    Serial.println("aux2");
    Serial.println(aux2);
    if (aux2<bound2){
      Serial.print("deu erro:");
      terro=micros();
      Serial.println(terro);
      Serial.end();
      err=1;
      vTaskEndScheduler ();
    }
    
    aux2 = aux2 +1;
    vTaskDelayUntil( &xLastWakeTime2, xFrequency2 );
  }
}

void task3(void *pvParameters){
  
  unsigned long tteste = 0;
  unsigned long tciclo = 0;
  unsigned long freq3 = 857143;
  unsigned long bound3;
  float fp;
  
  int aux3 = 1;
  float cycle3=1000 * kilo3;
  
  int x = 857.143;
  const TickType_t xFrequency3 = (x / portTICK_PERIOD_MS);
  TickType_t xLastWakeTime3;
  
  tteste=micros();
  Serial.println("tteste3");
  Serial.println(tteste);
  xLastWakeTime3 = xTaskGetTickCount();
  vTaskDelayUntil( &xLastWakeTime3, xonesec);
  while(1){
    Serial.println("t3");
    while(cycle3>0){
      fp=0.5+0.5;
      cycle3 = cycle3 - 1;
    }
    cycle3=1000 * kilo3;
    
    tciclo=micros();
    //Serial.print("tciclo3:");
    //Serial.println(tciclo);
    //bound3 = onesecmicros+(aux3*freq3);
    bound3= ((tciclo - onesecmicros) / freq3);
    Serial.println("bound3");
    Serial.println(bound3);
    Serial.println("aux3");
    Serial.println(aux3);
    if (aux3<bound3){
      Serial.print("deu erro:");
      terro=micros();
      Serial.println(terro);
      Serial.end();
      err=1;
      vTaskEndScheduler ();
    }
    
    aux3 = aux3 +1;
    vTaskDelayUntil( &xLastWakeTime3, xFrequency3 );
    xLastWakeTime3 = xTaskGetTickCount();
  }
}

void task4(void *pvParameters){
  
  unsigned long tteste = 0;
  unsigned long tciclo = 0;
  unsigned long freq4 = 352941;
  unsigned long bound4;
  float fp;
  
  int aux4 = 1;
  float cycle4=1000 * kilo4;
  
  int x = 352.941;
  const TickType_t xFrequency4 = (x / portTICK_PERIOD_MS);
  TickType_t xLastWakeTime4;
  
  tteste=micros();
  Serial.println("tteste4");
  Serial.println(tteste);
  xLastWakeTime4 = xTaskGetTickCount();
  vTaskDelayUntil( &xLastWakeTime4, xonesec);
  // &xLastWakeTime, xonesec
  while(1){
    Serial.println("t4");
    while(cycle4>0){
      fp=0.5+0.5;
      cycle4 = cycle4 - 1;
    }
    cycle4=1000 * kilo4;
    
    tciclo=micros();
    //Serial.print("tciclo4:");
    //Serial.println(tciclo);
    //bound4 = onesecmicros+(aux4*freq4);
    bound4= ((tciclo - onesecmicros) / freq4);
    Serial.println("bound4");
    Serial.println(bound4);
    Serial.println("aux4");
    Serial.println(aux4);
    if (aux4<bound4){
      Serial.print("deu erro:");
      terro=micros();
      Serial.println(terro);
      Serial.end();
      err=1;
      vTaskEndScheduler ();
    }
    
    aux4 = aux4 +1;
    vTaskDelayUntil( &xLastWakeTime4, xFrequency4 );
    xLastWakeTime4 = xTaskGetTickCount();
  }
}

void task5(void *pvParameters){
  
  unsigned long tteste = 0;
  unsigned long tciclo = 0;
  unsigned long freq5 = 193548;
  unsigned long bound5;
  float fp;
  //unsigned long t5=0;
  
  int aux5 = 1;
  float cycle5 = 1000 * kilo5;
  Serial.println(cycle5);
  
  int x = 193.548;
  const TickType_t xFrequency5 = (x / portTICK_PERIOD_MS);
  TickType_t xLastWakeTime5;
  
  tteste=micros();
  Serial.println("tteste5");
  Serial.println(tteste);
  xLastWakeTime5 = xTaskGetTickCount();
  vTaskDelayUntil( &xLastWakeTime5, xonesec);
  while(1){
    Serial.println("t5");
    //t5= micros();
    //Serial.println(t5);
    while(cycle5>0){
      fp=0.5+0.5;
      cycle5 = cycle5 - 1;
    }
    cycle5=1000 * kilo5;
    
    tciclo=micros();
    //Serial.print("tciclo5:");
    //Serial.println(tciclo);
    //bound5 = onesecmicros+(aux5*freq5);
    bound5= ((tciclo - onesecmicros) / freq5);
    Serial.println("bound5");
    Serial.println(bound5);
    Serial.println("aux5");
    Serial.println(aux5);
    if (aux5<bound5){
      Serial.print("deu erro:");
      terro=micros();
      Serial.println(terro);
      Serial.end();
      err=1;
      vTaskEndScheduler ();
    }
    
    aux5 = aux5 +1;
    vTaskDelayUntil( &xLastWakeTime5, xFrequency5 );
    xLastWakeTime5 = xTaskGetTickCount();
  }
}
