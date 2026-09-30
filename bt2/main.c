#include <stdio.h>

int main() {
    int tuoi_benh_nhan[4];
    int co_bao_hiem[4];
    int phi_kham[4];
    int tong_doanh_thu = 0;
    int tong_ca_uu_tien = 0;

    printf("=== NHAP THONG TIN 4 BENH NHAN ===\n");

    for (int i = 0; i < 4; i++) {
        printf("\nBenh nhan %d:\n", i + 1);

        printf("Nhap tuoi: ");
        scanf("%d", &tuoi_benh_nhan[i]);

        printf("Nhap BHYT (1: Co, 0: Khong): ");
        scanf("%d", &co_bao_hiem[i]);
    }

    for (int i = 0; i < 4; i++) {
        if (tuoi_benh_nhan[i] <= 0 || tuoi_benh_nhan[i] > 120) {
            phi_kham[i] = 0;

            printf("\nBenh nhan %d: LOI DU LIEU - Tuoi khong hop le\n", i + 1);
        } else {

            if (co_bao_hiem[i] != 0 && co_bao_hiem[i] != 1) {
                co_bao_hiem[i] = 0;
            }

            if (co_bao_hiem[i] == 1) {
                phi_kham[i] = 40000;
            } else {
                phi_kham[i] = 200000;
            }

            tong_doanh_thu = tong_doanh_thu + phi_kham[i];

            if (tuoi_benh_nhan[i] > 70) {
                tong_ca_uu_tien++;

                printf("\nBenh nhan %d: Uu tien\n", i + 1);
            } else {
                printf("\nBenh nhan %d: Thuong\n", i + 1);
            }
        }
    }

    printf("\n========================================\n");
    printf("       BAO CAO TIEP NHAN BENH NHAN\n");
    printf("========================================\n");

    for (int i = 0; i < 4; i++) {
        printf("\nBenh nhan %d\n", i + 1);
        printf("Tuoi: %d\n", tuoi_benh_nhan[i]);

        if (tuoi_benh_nhan[i] <= 0 || tuoi_benh_nhan[i] > 120) {
            printf("BHYT: Khong xet\n");
            printf("Phi kham: 0 VND\n");
            printf("Luon: LOI DU LIEU\n");
        } else {
            if (co_bao_hiem[i] == 1) {
                printf("BHYT: Co\n");
            } else {
                printf("BHYT: Khong\n");
            }

            printf("Phi kham: %d VND\n", phi_kham[i]);

            if (tuoi_benh_nhan[i] > 70) {
                printf("Luon: UU TIEN\n");
            } else {
                printf("Luon: THUONG\n");
            }
        }
    }

    printf("\n========================================\n");
    printf("Tong doanh thu: %d VND\n", tong_doanh_thu);
    printf("Tong so ca uu tien: %d\n", tong_ca_uu_tien);
    printf("========================================\n");

    return 0;
}