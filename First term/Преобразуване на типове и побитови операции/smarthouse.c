#include <stdio.h>

void print_state(unsigned char state) {
  int c = sizeof(state) * 8;
  for (int i = c - 1; i >= 0; i--) {
    printf("Light %d - %u\n", i + 1, (state >> i) & 1);
  }
  printf("\n");
}

void switch_light(unsigned char light, unsigned char* lights) {
    light = 1 << light - 1;
    *lights ^= light;
}

int main() {
    printf("---------------Menu--------------\n");
    printf("1. Print the state of the lights.\n");
    printf("2. Switch a light.\n");
    printf("0. Exit.\n");

    unsigned char lights = 0;
    while (1) {
        int act;
        printf("Enter action: ");
        scanf("%d", &act);

        if (act == 0) break;
        else if (act == 1) print_state(lights);
        else if (act == 2) {
            unsigned char light;
            printf("Enter the number of the light: ");
            scanf("%u", &light);
            switch_light(light, &lights);
        }
        else printf("Invalid input.");
    }

    return 0;
}
