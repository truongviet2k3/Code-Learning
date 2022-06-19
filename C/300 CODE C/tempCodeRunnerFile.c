for(i = 1; i <= thoi_han; i++) {
        for(j = 1; j <= i; j++) {
            tong_tien *= 1 + lai_suat / 100;
        }
        printf("%d             %lf\n", i, tong_tien);
    }