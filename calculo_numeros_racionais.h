
#ifndef CALCULO_NUMEROS_RACIONAIS_H
#define CALCULO_NUMEROS_RACIONAIS_H


int somar(int numerador1, int numerado2)
{
    return numerador1+numerado2;
}

int subtratir(int numerador1, int numerado2)
{
    return numerador1-numerado2;
}

void multiplicar(int numero1[2], int numero2[2], int resultado[2])
{
    int numerador;
    int denominador;

    numerador = numero1[0] * numero2[0];
    denominador = numero1[1] * numero2[1];

    resultado[0] = numerador;
    resultado[1] = denominador;
    
    
}

void dividir(int numero1[2], int numero2[2], int resultado[2])
{
    int numerador;
    int denominador;

    numerador = numero1[0] * numero2[1];
    denominador = numero1[1] * numero2[0];

    resultado[0] = numerador;
    resultado[1] = denominador;
    
    
}
int calcularMMC(int num1, int num2)
{
    int count;
    int mmc=1;
    int div=2;

    while (num1>1 || num2>1)
    {
           
      if(num1 % div == 0 && num2 % div == 0){
        
            num1 = num1 / div;
            num2 = num2 / div;
            mmc = mmc * div;
            div=2;
       
       } else if(num1>1 && num1 % div == 0){

                num1 = num1 / div;
                mmc = mmc * div;
                div=2;

        } else if(num2>1 && num2 % div == 0){

                num2 = num2 / div;
                mmc = mmc * div;
                div=2;
          
        } else {
           div++;
        }            
       
    }
   
    return mmc;   

}

int calcularNumeradorMMC(int numerador, int denominador,int mmc){
    int multiplicador=0;
    do
    {
        multiplicador++;
        denominador = multiplicador * denominador;
       

    } while (denominador<mmc);

    return numerador*multiplicador;
    
}


#endif