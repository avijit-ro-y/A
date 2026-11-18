Computer Graphics Practical C++ files

Files:
01_rectangle.cpp       - Rectangle drawing using loops
02_dda_line.cpp        - DDA line generation algorithm
03_bresenham_line.cpp  - Bresenham line generation algorithm
04_boundary_fill.cpp   - Boundary fill algorithm
05_flood_fill.cpp      - Flood fill algorithm
06_translate_line.cpp  - Translation of a line

Important:
These programs use graphics.h and conio.h (BGI graphics). They are not
standard C++ console programs. Run them in Turbo C++ with the BGI folder
at C:\TURBOC3\BGI, or adjust the initgraph() path for your installation.

The DDA and Bresenham implementations use the same algorithms as the
practical pages, with safer handling of vertical lines and different
line directions. The fill examples retain the recursive four-neighbour
method shown in the practical pages; very large filled regions can use
a lot of call stack.
