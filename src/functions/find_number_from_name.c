//
// Created by Manaki ITO on 2020/10/14.
//
#include <stdio.h>
#include "../macros/macros.c"


int find_number_from_name(struct student target_table[101], int number_of_students, char query[]) {
    // =================  変更しない  =================
    int student_ids[101];
    char family_names[101][16];
    char family_name_readings[101][32];
    char given_names[101][16];
    char given_name_readings[101][32];
    char jhs_names[101][32];

    EXTRACT_ALL_COLUMNS;
    // =================  変更しない  =================


    return 0;
}