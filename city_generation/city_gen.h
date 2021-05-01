#ifndef CITY_GEN
#define CITY_GEN

int nb_rand(int min, int max);
int define_dir(int x, int y, int cols, int rows, int vertical);
int draw_road(int* map, int x, int y, int r_size, int cols, int rows, int vertical, int direction);
void build_roads(int* map, int rows, int cols);
int is_constructible(int*map,int x, int y, int len, int cols, int rows, int vertical, int direction);
int constructible(int*map, int fixed, int cols, int len, int i, int j, int max_pos, int vertical);
#endif
