#include <stdio.h>
#include <math.h>

void ProcessSensorData(float* inputData, float* outputData, int dataSize, float multiplier) 
{
    for (int i = 0; i < dataSize; i++) 
    {
        outputData[i] = inputData[i] * multiplier;
    }
}

int main() 
{
    int size = 3;
    float rawSensorValues[3] = { 10.5f, 20.0f, 35.5f };
    float processedValues[3];

    ProcessSensorData(rawSensorValues, processedValues, size, 1.5f);

    for (int i = 0; i < size; i++) 
    {
        printf("Processed Sensor Data [%d]: %.2f\n", i, processedValues[i]);
    }

    return 0;
}
