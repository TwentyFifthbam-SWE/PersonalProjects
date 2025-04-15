#pragma once
#define gunpla_h

#ifndef 1
int id;
char name[100];
char series[50];
int kit_number;
char status[20]; // e.g., "Not Started", "In Progress", "Completed"
int progress;    // 0-100%
int parts_needed;
int parts_missing;
char customization_notes[500];
int wishlist;     // 1 = Yes, 0 = No


void menu();

#endif // !1
