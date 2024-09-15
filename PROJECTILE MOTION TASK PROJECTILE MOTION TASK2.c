#include <stdio.h>
#include <math.h>

#define GRAVITY 9.81

void calculate_projectile(double velocity, double angle, double *flight_time, double *height, double *distance) {
    double angle_in_radians = angle * (M_PI / 180.0);
    
    *flight_time = (2 * velocity * sin(angle_in_radians)) / GRAVITY;
    
    *height = (velocity * velocity * sin(angle_in_radians) * sin(angle_in_radians)) / (2 * GRAVITY);
    
    *distance = (velocity * velocity * sin(2 * angle_in_radians)) / GRAVITY;
}

int main() {
    double velocity_input, angle_input;
    double flight_time, height, distance;
    
    printf("Enter the initial velocity (in m/s): ");
    scanf("%lf", &velocity_input);
    printf("Enter the angle of projection (in degrees): ");
    scanf("%lf", &angle_input);
    
    calculate_projectile(velocity_input, angle_input, &flight_time, &height, &distance);
    
    printf("\n--- Projectile Motion Results ---\n");
    printf("Time of Flight: %.2f seconds\n", flight_time);
    printf("Maximum Height: %.2f meters\n", height);
    printf("Range of the Projectile: %.2f meters\n", distance);
    
    return 0;
}