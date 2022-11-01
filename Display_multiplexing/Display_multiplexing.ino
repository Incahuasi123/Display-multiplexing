int u=0;
int d=0;
int c=0;
int boton1;
int boton2;
int boton3;
int boton4;

int display1[7]={1,2,3,4,5,6,7};
int display2[7]={8,9,10,11,12,13,14};
int display3[7]={15,16,17,18,19,20,21};
int display4[7]={22,23,24,25,26,27,28};

void setup() {

   configurarSalidaDisplay(display1);
   configurarSalidaDisplay(display2);
   configurarSalidaDisplay(display3);
   configurarSalidaDisplay(display4);
   
   pinMode(boton1,INPUT);
   pinMode(boton2,INPUT);
   pinMode(boton3,INPUT);
   pinMode(boton4,INPUT);

}

void loop(){
  
if(true){
  
  u++;
  
  if(u>9){
    
    u=0;
    d++;

    if(d>9){
      
      d=0;
      c++;

      if(c>9){
        
        c=0;
        
      }
    }   
  }
}

if(digitalRead(boton1)){
  
  u++;
  uno(display4);
  
}

if(digitalRead(boton2)){
  
  u++;
  dos(display4);
}

if(digitalRead(boton3)){
  
  u++;
  tres(display4);
}

if(digitalRead(boton4)){
  
  u++;
  cuatro(display4);
}

if(u>9){
    
    u=0;
    d++;

    if(d>9){
      
      d=0;
      c++;

      if(c>9){
        
        c=0;
        
      }
    }   
  }



switch (u){

  case 0:
  limpiar(display1);
  cero(display1);
  break;

  case 1:
  limpiar(display1);
  uno(display1);
  break;
  
  case 2:
  limpiar(display1);
  dos(display1);
  break;
  
  case 3:
  limpiar(display1);
  tres(display1);
  break;
  
  case 4:
  limpiar(display1);
  cuatro(display1);
  break;
  
  case 5:
  limpiar(display1);
  cinco(display1);
  break;
  
  case 6:
  limpiar(display1);
  seis(display1);
  break;
  
  case 7:
  limpiar(display1);
  siete(display1);
  break;
  
  case 8:
  limpiar(display1);
  ocho(display1);
  break;
  
  case 9:
  limpiar(display1);
  nueve(display1);
  break;

  
}

switch (d){

  case 0:
  limpiar(display2);
  cero(display2);
  break;

  case 1:
  limpiar(display2);
  uno(display2);
  break;
  
  case 2:
  limpiar(display2);
  dos(display2);
  break;
  
  case 3:
  limpiar(display2);
  tres(display2);
  break;
  
  case 4:
  limpiar(display2);
  cuatro(display2);
  break;
  
  case 5:
  limpiar(display2);
  cinco(display2);
  break;
  
  case 6:
  limpiar(display2);
  seis(display2);
  break;
  
  case 7:
  limpiar(display2);
  siete(display2);
  break;
  
  case 8:
  limpiar(display2);
  ocho(display2);
  break;
  
  case 9:
  limpiar(display2);
  nueve(display2);
  break;

  
}

switch (c){

  case 0:
  limpiar(display3);
  cero(display3);
  break;

  case 1:
  limpiar(display3);
  uno(display3);
  break;
  
  case 2:
  limpiar(display3);
  dos(display3);
  break;
  
  case 3:
  limpiar(display3);
  tres(display3);
  break;
  
  case 4:
  limpiar(display3);
  cuatro(display3);
  break;
  
  case 5:
  limpiar(display3);
  cinco(display3);
  break;
  
  case 6:
  limpiar(display3);
  seis(display3);
  break;
  
  case 7:
  limpiar(display3);
  siete(display3);
  break;
  
  case 8:
  limpiar(display3);
  ocho(display3);
  break;
  
  case 9:
  limpiar(display3);
  nueve(display3);
  break;

  
}

 
}

 void limpiar(int disp[7]){
  
  digitalWrite(disp[0],LOW);
  digitalWrite(disp[1],LOW);
  digitalWrite(disp[2],LOW);
  digitalWrite(disp[3],LOW);
  digitalWrite(disp[4],LOW);
  digitalWrite(disp[5],LOW);
  digitalWrite(disp[6],LOW);
  
 }

 void cero(int disp[7]){
  digitalWrite(disp[0],HIGH);
  digitalWrite(disp[1],HIGH);
  digitalWrite(disp[2],HIGH);
  digitalWrite(disp[3],HIGH);
  digitalWrite(disp[4],HIGH);
  digitalWrite(disp[5],HIGH);
  
 }

 void uno(int disp[7]){
  
  digitalWrite(disp[0],HIGH);
  digitalWrite(disp[1],HIGH);
    
 }

 void dos(int disp[7]){
  digitalWrite(disp[1],HIGH);
  digitalWrite(disp[2],HIGH);
  digitalWrite(disp[4],HIGH);
  digitalWrite(disp[5],HIGH);
  digitalWrite(disp[6],HIGH);
 }

 void tres(int disp[7]){
  digitalWrite(disp[0],HIGH);
  digitalWrite(disp[1],HIGH);
  digitalWrite(disp[2],HIGH);
  digitalWrite(disp[5],HIGH);
  digitalWrite(disp[0],HIGH);
  
 }

 void cuatro(int disp[7]){
  digitalWrite(disp[0],HIGH);
  digitalWrite(disp[1],HIGH);
  digitalWrite(disp[3],HIGH);
  digitalWrite(disp[6],HIGH);
 }

 void cinco(int disp[7]){
  digitalWrite(disp[0],HIGH);
  digitalWrite(disp[2],HIGH);
  digitalWrite(disp[3],HIGH);
  digitalWrite(disp[5],HIGH);
  digitalWrite(disp[6],HIGH);
 }

 void seis(int disp[7]){
  digitalWrite(disp[0],HIGH);
  digitalWrite(disp[2],HIGH);
  digitalWrite(disp[3],HIGH);
  digitalWrite(disp[4],HIGH);
  digitalWrite(disp[5],HIGH);
  digitalWrite(disp[6],HIGH);
  
 }

 void siete(int disp[7]){
  digitalWrite(disp[0],HIGH);
  digitalWrite(disp[1],HIGH);
  digitalWrite(disp[2],HIGH);
 }
 
 void ocho(int disp[7]){
  digitalWrite(disp[0],HIGH);
  digitalWrite(disp[1],HIGH);
  digitalWrite(disp[2],HIGH);
  digitalWrite(disp[3],HIGH);
  digitalWrite(disp[4],HIGH);
  digitalWrite(disp[5],HIGH);
  digitalWrite(disp[6],HIGH);
 }

 void nueve(int disp[7]){
  digitalWrite(disp[0],HIGH);
  digitalWrite(disp[1],HIGH);
  digitalWrite(disp[2],HIGH);
  digitalWrite(disp[3],HIGH);
  digitalWrite(disp[6],HIGH);
  
  
 }

 void configurarSalidaDisplay(int disp[7]){
  
  for(int t=0;t<=7;t++){

    pinMode(disp[t],OUTPUT);
    
  }
 }

 

