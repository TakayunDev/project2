#include <stdio.h>
#include <iostream>
#define NUM_X (10)
#define NUM_Y (20)
#define EDGE  (32)

struct V {
    int x;
    int y;
};

int main(void) {

    V n[NUM_X][NUM_Y];    // �v�f��10,20 (�e�v�f�ɂ��Ă͏��������Ă��Ȃ����ߓK���Ȓl�������Ă���j

    for (int y = 0; y < NUM_Y; y++) {
        for (int x = 0; x < NUM_X; x++) {
            n[x][y] = {
                x * EDGE,
                y * EDGE,
            };
        }
    }

    V* p;                 // �e�v�f���Q�Ƃ��邽�߂̃|�C���^

    printf("[�T���v��]�ϐ�n�̃A�h���X�F%d\r\n", &n);

    printf("n[0][0]�̃A�h���X:%d\r\n", n[0][0]);

    printf("n[NUM_X - 1],n[NUM_Y - 1]�̃A�h���X:%d,%d\r\n", n[NUM_X - 1], n[NUM_Y - 1]);

    p = &n[NUM_X - 1][NUM_Y - 1];   // V�̃|�C���^��V�z��̐擪�A�h���X��n���B

    int sum;

    for (int y = 0; y < NUM_Y; y++) {
        for (int x = 0; x < NUM_X; x++) {
            p->x = x;
            printf("[�d�v]p->x�̒l�̌���:%d\r\n", p->x);
        }
        p->y = y;
        printf("[�d�v]p->y�̒l�̌���:%d\r\n", p->y);
    }
    sum = p->x + p->y;
    printf("sum�̒l�̌���:%d\r\n", sum);
    return 0;
}