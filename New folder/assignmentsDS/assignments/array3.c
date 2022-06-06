// Create a function named download_time that accepts the download speed in Mbps
// and file size in Mb. The function must return a pointer to a 3-element array
// containing the downloaded time in hours, minutes and seconds.
#include<stdio.h>
#include<stdlib.h>
float *download_time(float download_speed,float file_size){
    float *time;
    time=(float*)(malloc(3*sizeof(float)));
    float a=file_size/download_speed;
    int b=file_size/download_speed;
    float hours=b/3600;
    time[0]=hours;
    b=b%3600;
    float minutes=b/60;
    time[1]=minutes;
    float seconds=a-hours*3600-minutes*60;
    time[2]=seconds;

    return time;




   


}
int main()
{
    

    float file_size,download_speed;
    printf("enter the file size\n");
    scanf("%f",&file_size);
    printf("enter the download speed\n");
    scanf("%f",&download_speed);

    float *downloadTime=download_time(download_speed,file_size);
    printf("the time taken for the file to download is %0.0f hours  %0.0fminutes %fseconds\n",downloadTime[0],downloadTime[1],downloadTime[2]);
    return 0;
}