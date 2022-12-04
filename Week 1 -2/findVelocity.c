/* Write a function named “velocityCalc” which returns an appropriate value for the
formula “v=u+at”, where v is the final velocity, u is the initial velocity ,a is the
acceleration and t is the time that has elapsed. Depending upon which variable is set to
“NAN” when the function is called , your function should work it out and return the
value. */

# include <stdio.h>
# include <math.h>

void velocityCalc(float v, float u, float a , float t);
void main(){
    float v,u,a,t;
    v=NAN;
    u=5;
    t= 1.5;
    a = 10;
    velocityCalc(v,u,a,t);
}

void velocityCalc(float v, float u, float a , float t){
    if(isnan(v)){
        v= u+(a*t);
        printf("The final velocity is : %f",v);
    }
    else if (isnan(u)){
        u = v - a*t;
        printf("The initial velocity is : %f",u);
    }
    else if (isnan(a)){
        a = (v-u)/t;
        printf("The acceleration is : %f",a);
    }
    else{
        t = (v-u)/a;
        printf("The time is : %f",u);
    }

}
