#include <math.h>
#include <stdlib.h>
#include <iostream>
#include <cstring>
#include <string>
#include <GLFW/glfw3.h>
#pragma once

void A(int x, int y) {
	glBegin(GL_POINTS);
	for (int i = 0; i < 13; i++) {
		if (i == 0) {
			for (int j = 0; j < 4; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 9; j < 13; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 1 || i == 2) {
			for (int j = 1; j < 3; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 10; j < 12; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 3 || i == 4) {
			for (int j = 2; j < 4; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 9; j < 11; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 5) {
			for (int j = 3; j < 10; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 6 || i == 7) {
			for (int j = 3; j < 5; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 8; j < 10; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 8 || i == 9) {
			for (int j = 4; j < 6; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 7; j < 9; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 10 || i == 11) {
			for (int j = 5; j < 8; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else {
			for (int j = 6; j < 7; j++) {
				glVertex2i(x + j, y + i);
			}
		}
	}
	glEnd();
}

void B(int x, int y) {
	glBegin(GL_POINTS);
	for (int i = 0; i < 13; i++) {
		if (i == 0 || i == 12) {
			for (int j = 0; j < 8; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 1 || i == 5 || i == 7 || i == 11) {
			for (int j = 1; j < 3; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 7; j < 9; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 6) {
			for (int j = 1; j < 8; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else {
			for (int j = 1; j < 3; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 8; j < 10; j++) {
				glVertex2i(x + j, y + i);
			}
		}
	}
	glEnd();
}

void C(int x, int y) {
	glBegin(GL_POINTS);
	for (int i = 0; i < 13; i++) {
		if (i == 0 || i == 12) {
			for (int j = 3; j < 9; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 1 || i == 11) {
			for (int j = 2; j < 4; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 9; j < 10; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 2 || i == 10) {
			for (int j = 1; j < 3; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 10; j < 11; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else {
			for (int j = 0; j < 2; j++) {
				glVertex2i(x + j, y + i);
			}
		}
	}
	glEnd();
}

void D(int x, int y) {
	glBegin(GL_POINTS);
	for (int i = 0; i < 13; i++) {
		if (i == 0 || i == 12) {
			for (int j = 0; j < 9; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 1 || i == 11) {
			for (int j = 1; j < 3; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 8; j < 10; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 2 || i == 10) {
			for (int j = 1; j < 3; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 9; j < 11; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else {
			for (int j = 1; j < 3; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 10; j < 12; j++) {
				glVertex2i(x + j, y + i);
			}
		}
	}
	glEnd();
}

void E(int x, int y) {
	glBegin(GL_POINTS);
	for (int i = 0; i < 13; i++) {
		if (i == 0 || i == 12) {
			for (int j = 0; j < 9; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 1 || i == 11) {
			for (int j = 1; j < 3; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 8; j < 9; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 5 || i == 7) {
			for (int j = 1; j < 3; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 6; j < 7; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 6) {
			for (int j = 1; j < 7; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else {
			for (int j = 1; j < 3; j++) {
				glVertex2i(x + j, y + i);
			}
		}
	}
	glEnd();
}

void F(int x, int y) {
	glBegin(GL_POINTS);
	for (int i = 0; i < 13; i++) {
		if (i == 0) {
			for (int j = 0; j < 4; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 5 || i == 7) {
			for (int j = 1; j < 3; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 6; j < 7; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 6) {
			for (int j = 1; j < 7; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 11) {
			for (int j = 1; j < 3; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 8; j < 9; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 12) {
			for (int j = 0; j < 9; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else {
			for (int j = 1; j < 3; j++) {
				glVertex2i(x + j, y + i);
			}
		}
	}
	glEnd();
}

void G(int x, int y) {
	glBegin(GL_POINTS);
	for (int i = 0; i < 13; i++) {
		if (i == 0) {
			for (int j = 3; j < 10; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 1) {
			for (int j = 2; j < 4; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 8; j < 11; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 2) {
			for (int j = 1; j < 3; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 9; j < 11; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 3 || i == 4) {
			for (int j = 0; j < 2; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 9; j < 11; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 5) {
			for (int j = 0; j < 2; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 8; j < 12; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 10) {
			for (int j = 1; j < 3; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 10; j < 11; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 11) {
			for (int j = 2; j < 4; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 9; j < 10; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 12) {
			for (int j = 3; j < 9; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else {
			for (int j = 0; j < 2; j++) {
				glVertex2i(x + j, y + i);
			}
		}
	}
	glEnd();
}

void H(int x, int y) {
	glBegin(GL_POINTS);
	for (int i = 0; i < 13; i++) {
		if (i == 0 || i == 12) {
			for (int j = 0; j < 4; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 7; j < 11; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 6) {
			for (int j = 1; j < 10; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else {
			for (int j = 1; j < 3; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 8; j < 10; j++) {
				glVertex2i(x + j, y + i);
			}
		}
	}
	glEnd();
}

void I(int x, int y) {
	glBegin(GL_POINTS);
	for (int i = 0; i < 13; i++) {
		if (i == 0 || i == 12) {
			for (int j = 0; j < 4; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else {
			for (int j = 1; j < 3; j++) {
				glVertex2i(x + j, y + i);
			}
		}
	}
	glEnd();
}

void J(int x, int y) {
	glBegin(GL_POINTS);
	for (int i = 0; i < 13; i++) {
		if (i == 0) {
			for (int j = 0; j < 4; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 1) {
			for (int j = 0; j < 2; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 3; j < 5; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 12) {
			for (int j = 1; j < 7; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else {
			for (int j = 3; j < 5; j++) {
				glVertex2i(x + j, y + i);
			}
		}
	}
	glEnd();
}

void K(int x, int y) {
	glBegin(GL_POINTS);
	for (int i = 0; i < 13; i++) {
		if (i == 0) {
			for (int j = 0; j < 4; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 7; j < 11; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 1) {
			for (int j = 1; j < 3; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 8; j < 10; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 2 || i == 11) {
			for (int j = 1; j < 3; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 7; j < 9; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 3 || i == 10) {
			for (int j = 1; j < 3; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 6; j < 8; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 4 || i == 9) {
			for (int j = 1; j < 3; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 5; j < 7; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 5 || i == 8) {
			for (int j = 1; j < 3; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 4; j < 6; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 12) {
			for (int j = 0; j < 4; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 6; j < 10; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else {
			for (int j = 1; j < 5; j++) {
				glVertex2i(x + j, y + i);
			}
		}
	}
	glEnd();
}

void L(int x, int y) {
	glBegin(GL_POINTS);
	for (int i = 0; i < 13; i++) {
		if (i == 0) {
			for (int j = 0; j < 8; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		if (i == 1) {
			for (int j = 1; j < 3; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 7; j < 8; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		if (i == 12) {
			for (int j = 0; j < 4; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else {
			for (int j = 1; j < 3; j++) {
				glVertex2i(x + j, y + i);
			}
		}
	}
	glEnd();
}

void M(int x, int y) {
	glBegin(GL_POINTS);
	for (int i = 0; i < 13; i++) {
		if (i == 0 || i == 12) {
			for (int j = 0; j < 4; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 9; j < 13; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 4) {
			for (int j = 1; j < 3; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 6; j < 7; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 10; j < 12; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 5 || i == 6) {
			for (int j = 1; j < 3; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 5; j < 8; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 10; j < 12; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 7) {
			for (int j = 1; j < 3; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 4; j < 9; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 10; j < 12; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 8) {
			for (int j = 1; j < 3; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 4; j < 6; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 7; j < 9; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 10; j < 12; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 9 || i == 10) {
			for (int j = 1; j < 5; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 8; j < 12; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 11) {
			for (int j = 1; j < 4; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 9; j < 12; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else {
			for (int j = 1; j < 3; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 10; j < 12; j++) {
				glVertex2i(x + j, y + i);
			}
		}
	}
	glEnd();
}

void N(int x, int y) {
	glBegin(GL_POINTS);
	for (int i = 0; i < 13; i++) {
		if (i == 1) {
			for (int j = 1; j < 3; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 8; j < 11; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 2 || i == 3) {
			for (int j = 1; j < 3; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 7; j < 11; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 4 || i == 5) {
			for (int j = 1; j < 3; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 6; j < 8; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 9; j < 11; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 6) {
			for (int j = 1; j < 3; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 5; j < 7; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 9; j < 11; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 7 || i == 8) {
			for (int j = 1; j < 3; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 4; j < 6; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 9; j < 11; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 9 || i == 10) {
			for (int j = 1; j < 5; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 9; j < 11; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 11) {
			for (int j = 1; j < 4; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 9; j < 11; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else {
			for (int j = 0; j < 4; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 8; j < 12; j++) {
				glVertex2i(x + j, y + i);
			}
		}
	}
	glEnd();
}

void O(int x, int y) {
	glBegin(GL_POINTS);
	for (int i = 0; i < 13; i++) {
		if (i == 0 || i == 12) {
			for (int j = 3; j < 9; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 1 || i == 11) {
			for (int j = 2; j < 4; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 8; j < 10; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 2 || i == 10) {
			for (int j = 1; j < 3; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 9; j < 11; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else {
			for (int j = 0; j < 2; j++) {
				glVertex2i(x + j, y + i);
			}
			for(int j = 10; j < 12; j++) {
				glVertex2i(x + j, y + i);
			}
		}
	}
	glEnd();
}

void P(int x, int y) {
	glBegin(GL_POINTS);
	for (int i = 0; i < 13; i++) {
		if (i == 0) {
			for (int j = 0; j < 4; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 6) {
			for (int j = 1; j < 8; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 7 || i == 11) {
			for (int j = 1; j < 3; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 7; j < 9; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 8 || i == 9 || i == 10) {
			for (int j = 1; j < 3; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 8; j < 10; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 12) {
			for (int j = 0; j < 8; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else {
			for (int j = 1; j < 3; j++) {
				glVertex2i(x + j, y + i);
			}
		}
	}
	glEnd();
}

void Q(int x, int y) {
	glBegin(GL_POINTS);
	for (int i = 0; i < 13; i++) {
		if (i == 0) {
			for (int j = 3; j < 9; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 10; j < 13; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 1) {
			for (int j = 2; j < 4; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 8; j < 11; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 2) {
			for (int j = 1; j < 3; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 7; j < 11; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 3) {
			for (int j = 0; j < 2; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 6; j < 8; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 10; j < 12; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 10) {
			for (int j = 1; j < 3; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 9; j < 11; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 11) {
			for (int j = 2; j < 4; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 8; j < 10; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 12) {
			for (int j = 3; j < 9; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else {
			for (int j = 0; j < 2; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 10; j < 12; j++) {
				glVertex2i(x + j, y + i);
			}
		}
	}
	glEnd();
}

void R(int x, int y) {
	glBegin(GL_POINTS);
	for (int i = 0; i < 13; i++) {
		if (i == 0) {
			for (int j = 0; j < 4; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 7; j < 11; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 5) {
			for (int j = 1; j < 3; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 7; j < 8; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 6) {
			for (int j = 1; j < 8; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 7 || i == 11) {
			for (int j = 1; j < 3; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 7; j < 9; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 12) {
			for (int j = 0; j < 8; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else {
			for (int j = 1; j < 3; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 8; j < 10; j++) {
				glVertex2i(x + j, y + i);
			}
		}
	}
	glEnd();
}

void S(int x, int y) {
	glBegin(GL_POINTS);
	for (int i = 0; i < 13; i++) {
		if (i == 1) {
			for (int j = 1; j < 2; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 6; j < 8; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 2) {
			for (int j = 0; j < 1; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 7; j < 9; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 3) {
			for (int j = 7; j < 9; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 4) {
			for (int j = 6; j < 9; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 5) {
			for (int j = 3; j < 8; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 6) {
			for (int j = 1; j < 8; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 7) {
			for (int j = 0; j < 6; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 8) {
			for (int j = 0; j < 3; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 9) {
			for (int j = 0; j < 2; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 10) {
			for (int j = 0; j < 2; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 8; j < 9; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 11) {
			for (int j = 1; j < 3; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 7; j < 8; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else {
			for (int j = 2; j < 7; j++) {
				glVertex2i(x + j, y + i);
			}
		}
	}
	glEnd();
}

void T(int x, int y) {
	glBegin(GL_POINTS);
	for (int i = 0; i < 13; i++) {
		if (i == 0) {
			for (int j = 3; j < 7; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 11) {
			for (int j = 0; j < 1; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 4; j < 6; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 9; j < 10; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 12) {
			for (int j = 0; j < 10; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else {
			for (int j = 4; j < 6; j++) {
				glVertex2i(x + j, y + i);
			}
		}
	}
	glEnd();
}

void U(int x, int y) {
	glBegin(GL_POINTS);
	for (int i = 0; i < 13; i++) {
		if (i == 0) {
			for (int j = 2; j < 9; j++) {
				glVertex2i(x + j, y + i);
			}
		} else if (i == 1) {
			for (int j = 1; j < 4; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 7; j < 10; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 12) {
			for (int j = 0; j < 4; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 7; j < 11; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else {
			for (int j = 1; j < 3; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 8; j < 10; j++) {
				glVertex2i(x + j, y + i);
			}
		}
	}
	glEnd();
}

void V(int x, int y) {
	glBegin(GL_POINTS);
	for (int i = 0; i < 13; i++) {
		if (i == 0) {
			for (int j = 4; j < 7; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 1) {
			for (int j = 3; j < 8; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 2) {
			for (int j = 3; j < 5; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 6; j < 8; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 3 || i == 4) {
			for (int j = 2; j < 4; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 7; j < 9; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 12) {
			for (int j = 0; j < 4; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 7; j < 11; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else {
			for (int j = 1; j < 3; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 8; j < 10; j++) {
				glVertex2i(x + j, y + i);
			}
		}
	}
	glEnd();
}

void W(int x, int y) {
	glBegin(GL_POINTS);
	for (int i = 0; i < 13; i++) {
		if (i == 0) {
			for (int j = 3; j < 6; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 8; j < 11; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 1) {
			for (int j = 2; j < 12; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 2) {
			for (int j = 2; j < 4; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 5; j < 9; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 10; j < 12; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 12) {
			for (int j = 0; j < 4; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 5; j < 9; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 10; j < 14; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else {
			for (int j = 1; j < 3; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 6; j < 8; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 11; j < 13; j++) {
				glVertex2i(x + j, y + i);
			}
		}
	}
	glEnd();
}

void X(int x, int y) {
	glBegin(GL_POINTS);
	for (int i = 0; i < 13; i++) {
		if (i == 0 || i == 12) {
			for (int j = 0; j < 4; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 6; j < 10; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 4 || i == 8) {
			for (int j = 2; j < 4; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 6; j < 8; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 5 || i == 7) {
			for (int j = 3; j < 7; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 6) {
			for (int j = 4; j < 6; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else {
			for (int j = 1; j < 3; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 7; j < 9; j++) {
				glVertex2i(x + j, y + i);
			}
		}
	}
	glEnd();
}

void Y(int x, int y) {
	glBegin(GL_POINTS);
	for (int i = 0; i < 13; i++) {
		 if (i == 0 || i == 6) {
			for (int j = 3; j < 7; j++) {
				glVertex2i(x + j, y + i);
			}
		 }
		 else if (i == 7) {
			 for (int j = 2; j < 4; j++) {
				 glVertex2i(x + j, y + i);
			 }
			 for (int j = 6; j < 8; j++) {
				 glVertex2i(x + j, y + i);
			 }
		 }
		 else if (i == 8 || i == 9 || i == 10 || i == 11) {
			 for (int j = 1; j < 3; j++) {
				 glVertex2i(x + j, y + i);
			 }
			 for (int j = 7; j < 9; j++) {
				 glVertex2i(x + j, y + i);
			 }
		 }
		 else if (i == 12) {
			for (int j = 0; j < 4; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 6; j < 10; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else {
			for (int j = 4; j < 6; j++) {
				glVertex2i(x + j, y + i);
			}
		}
	}
	glEnd();
}

void Z(int x, int y) {
	glBegin(GL_POINTS);
	for (int i = 0; i < 13; i++) {
		if (i == 0 || i == 12) {
			for (int j = 0; j < 11; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 1) {
			for (int j = 0; j < 2; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 10; j < 11; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 11) {
			for (int j = 0; j < 1; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 9; j < 11; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else {
			for (int j = i - 2; j < i + 1; j++) {
				glVertex2i(x + j, y + i);
			}
		}
	}
	glEnd();
}





void Zero(int x, int y) {
	glBegin(GL_POINTS);
	for (int i = 0; i < 13; i++) {
		if (i == 0 || i == 12) {
			for (int j = 2; j < 7; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 1 || i == 11) {
			for (int j = 1; j < 3; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 6; j < 8; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 2 || i == 3 || i == 9 || i == 10) {
			for (int j = 0; j < 2; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 7; j < 9; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else {
			for (int j = 0; j < 2; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 7; j < 9; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = i - 2; j < i - 1; j++) {
				glVertex2i(x + j, y + i);
			}
		}
	}
	glEnd();
}

void One(int x, int y) {
	glBegin(GL_POINTS);
	for (int i = 0; i < 13; i++) {
		if (i == 0) {
			for (int j = 0; j < 6; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 10) {
			for (int j = 0; j < 4; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 11) {
			for (int j = 1; j < 4; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else {
			for (int j = 2; j < 4; j++) {
				glVertex2i(x + j, y + i);
			}
		}
	}
	glEnd();
}

void Two(int x, int y) {
	glBegin(GL_POINTS);
	for (int i = 0; i < 13; i++) {
		if (i == 0) {
			for (int j = 0; j < 9; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 7 || i == 8 || i == 9) {
			for (int j = 7; j < 9; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 10) {
			for (int j = 0; j < 1; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 7; j < 9; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 11) {
			for (int j = 1; j < 2; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 6; j < 8; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 12) {
			for (int j = 2; j < 7; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else {
			for (int j = i; j < i + 2; j++) {
				glVertex2i(x + j, y + i);
			}
		}
	}
	glEnd();
}

void Three(int x, int y) {
	glBegin(GL_POINTS);
	for (int i = 0; i < 13; i++) {
		if (i == 0 || i == 12) {
			for (int j = 2; j < 7; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 1 || i == 11) {
			for (int j = 1; j < 2; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 6; j < 8; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 2 || i == 10) {
			for (int j = 0; j < 1; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 7; j < 9; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 5|| i == 7) {
			for (int j = 6; j < 8; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 6) {
			for (int j = 5; j < 7; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else {
			for (int j = 7; j < 9; j++) {
				glVertex2i(x + j, y + i);
			}
		}
	}
	glEnd();
}

void Four(int x, int y) {
	glBegin(GL_POINTS);
	for (int i = 0; i < 13; i++) {
		if (i == 0) {
			for (int j = 5; j < 9; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 1 || i == 2 || i == 3 || i == 4) {
			for (int j = 6; j < 8; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 5) {
			for (int j = 0; j < 9; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else {
			for (int j = 6; j < 8; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = i - 6; j < i - 4; j++) {
				glVertex2i(x + j, y + i);
			}
		}
	}
	glEnd();
}

void Five(int x, int y) {
	glBegin(GL_POINTS);
	for (int i = 0; i < 13; i++) {
		if (i == 0) {
			for (int j = 2; j < 7; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 1) {
			for (int j = 1; j < 2; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 6; j < 8; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 2) {
			for (int j = 0; j < 1; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 7; j < 9; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i < 6) {
			for (int j = 7; j < 9; j++) {
				glVertex2i(x + j, y + i);
			}
		} 
		else if (i == 6) {
			for (int j = 6; j < 8; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 7) {
			for (int j = 0; j < 7; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 12) {
			for (int j = 0; j < 9; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else {
			for (int j = 0; j < 2; j++) {
				glVertex2i(x + j, y + i);
			}
		}
	}
	glEnd();
}

void Six(int x, int y) {
	glBegin(GL_POINTS);
	for (int i = 0; i < 13; i++) {
		if (i == 0 || i == 12) {
			for (int j = 2; j < 7; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 1 ) {
			for (int j = 1; j < 3; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 6; j < 8; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 6) {
			for (int j = 0; j < 3; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 6; j < 8; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 7) {
			for (int j = 0; j < 7; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 8 || i == 9 ) {
			for (int j = 0; j < 2; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 10) {
			for (int j = 0; j < 2; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 8; j < 9; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 11) {
			for (int j = 1; j < 3; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 7; j < 8; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else {
			for (int j = 0; j < 2; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 7; j < 9; j++) {
				glVertex2i(x + j, y + i);
			}
		}
	}
	glEnd();
}

void Seven(int x, int y) {
	glBegin(GL_POINTS);
	for (int i = 0; i < 13; i++) {
		if (i == 12) {
			for (int j = 0; j < 9; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else {
			if (i < 3) {
				for (int j = 4; j < 6; j++) {
					glVertex2i(x + j, y + i);
				}
			}
			else if (i < 6) {
				for (int j = 5; j < 7; j++) {
					glVertex2i(x + j, y + i);
				}
			}
			else if (i < 9) {
				for (int j = 6; j < 8; j++) {
					glVertex2i(x + j, y + i);
				}
			}
			else {
				for (int j = 7; j < 9; j++) {
					glVertex2i(x + j, y + i);
				}
			}
		}
	}
	glEnd();
}

void Eight(int x, int y) {
	glBegin(GL_POINTS);
	for (int i = 0; i < 13; i++) {
		if (i == 0 || i == 7 || i == 12) {
			for (int j = 2; j < 7; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 1 || i == 6 || i == 8 || i == 11) {
			for (int j = 1; j < 3; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 6; j < 8; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else {
			for (int j = 0; j < 2; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 7; j < 9; j++) {
				glVertex2i(x + j, y + i);
			}
		}
	}
	glEnd();
}

void Nine(int x, int y) {
	glBegin(GL_POINTS);
	for (int i = 0; i < 13; i++) {
		if (i < 3) {
			for (int j = 4; j < 6; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i < 5) {
			for (int j = 5; j < 7; j++) {
				glVertex2i(x + j, y + i);
			}
		} else if (i == 5) {
			for (int j = 2; j < 8; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 6 || i == 11) {
			for (int j = 1; j < 3; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 6; j < 8; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else if (i == 12) {
			for (int j = 2; j < 7; j++) {
				glVertex2i(x + j, y + i);
			}
		}
		else {
			for (int j = 0; j < 2; j++) {
				glVertex2i(x + j, y + i);
			}
			for (int j = 7; j < 9; j++) {
				glVertex2i(x + j, y + i);
			}
		}
	}
	glEnd();
}




void text(int x, int y, std::string text, int red, int green, int blue) {

	glColor3b(red, green, blue);

	char* arr;
	std::string obj(text);
	arr = &obj[0];

	std::string s(text);
	int n = s.length();

	const int spacing = 2;

	for (int i = 0; i < n + 1; i++) {

		//letters
		if (arr[i] == 'a' || arr[i] == 'A') {
			A(x, y);
			x = x + 13 + spacing;
		}
		else if (arr[i] == 'b' || arr[i] == 'B') {
			B(x, y);
			x = x + 10 + spacing;
		}
		else if (arr[i] == 'c' || arr[i] == 'C') {
			C(x, y);
			x = x + 11 + spacing;
		}
		else if (arr[i] == 'd' || arr[i] == 'D') {
			D(x, y);
			x = x + 12 + spacing;
		}
		else if (arr[i] == 'e' || arr[i] == 'E') {
			E(x, y);
			x = x + 9 + spacing;
		}
		else if (arr[i] == 'f' || arr[i] == 'F') {
			F(x, y);
			x = x + 9 + spacing;
		}
		else if (arr[i] == 'g' || arr[i] == 'G') {
			G(x, y);
			x = x + 12 + spacing;
		}
		else if (arr[i] == 'h' || arr[i] == 'H') {
			H(x, y);
			x = x + 11 + spacing;
		}
		else if (arr[i] == 'i' || arr[i] == 'I') {
			I(x, y);
			x = x + 4 + spacing;
		}
		else if (arr[i] == 'j' || arr[i] == 'J') {
			J(x, y);
			x = x + 7 + spacing;
		}
		else if (arr[i] == 'k' || arr[i] == 'K') {
			K(x, y);
			x = x + 12 + spacing;
		}
		else if (arr[i] == 'l' || arr[i] == 'L') {
			L(x, y);
			x = x + 8 + spacing;
		}
		else if (arr[i] == 'm' || arr[i] == 'M') {
			M(x, y);
			x = x + 13 + spacing;
		}
		else if (arr[i] == 'n' || arr[i] == 'N') {
			N(x, y);
			x = x + 12 + spacing;
		}
		else if (arr[i] == 'o' || arr[i] == 'O') {
			O(x, y);
			x = x + 12 + spacing;
		}
		else if (arr[i] == 'p' || arr[i] == 'P') {
			P(x, y);
			x = x + 10 + spacing;
		}
		else if (arr[i] == 'q' || arr[i] == 'Q') {
			Q(x, y);
			x = x + 13 + spacing;
		}
		else if (arr[i] == 'r' || arr[i] == 'R') {
			R(x, y);
			x = x + 11 + spacing;
		}
		else if (arr[i] == 's' || arr[i] == 'S') {
			S(x, y);
			x = x + 9 + spacing;
		}
		else if (arr[i] == 't' || arr[i] == 'T') {
			T(x, y);
			x = x + 10 + spacing;
		}
		else if (arr[i] == 'u' || arr[i] == 'U') {
			U(x, y);
			x = x + 11 + spacing;
		}
		else if (arr[i] == 'v' || arr[i] == 'V') {
			V(x, y);
			x = x + 11 + spacing;
		}
		else if (arr[i] == 'w' || arr[i] == 'W') {
			W(x, y);
			x = x + 14 + spacing;
		}
		else if (arr[i] == 'x' || arr[i] == 'X') {
			X(x, y);
			x = x + 10 + spacing;
		}
		else if (arr[i] == 'y' || arr[i] == 'Y') {
			Y(x, y);
			x = x + 10 + spacing;
		}
		else if (arr[i] == 'z' || arr[i] == 'Z') {
			Z(x, y);
			x = x + 11 + spacing;
		}


		//numbers
		else if (arr[i] == '0') {
		Zero(x, y);
		x = x + 9 + spacing;
		}
		else if (arr[i] == '1') {
			One(x, y);
			x = x + 6 + spacing;
		}
		else if (arr[i] == '2') {
		Two(x, y);
		x = x + 9 + spacing;
		}
		else if (arr[i] == '3') {
		Three(x, y);
		x = x + 9 + spacing;
		}
		else if (arr[i] == '4') {
		Four(x, y);
		x = x + 9 + spacing;
		}
		else if (arr[i] == '5') {
		Five(x, y);
		x = x + 9 + spacing;
		}
		else if (arr[i] == '6') {
		Six(x, y);
		x = x + 9 + spacing;
		}
		else if (arr[i] == '7') {
		Seven(x, y);
		x = x + 9 + spacing;
		}
		else if (arr[i] == '8') {
		Eight(x, y);
		x = x + 9 + spacing;
		}
		else if (arr[i] == '9') {
		Nine(x, y);
		x = x + 9 + spacing;
		}


		//special characters
		else if (arr[i] == ' ') {
			x = x + 10 + spacing;
		}
		else if (arr[i] == ':') {
			glBegin(GL_POINTS);
			for (int i = 0; i < 13; i++) {
				if (i == 2 || i == 3 || i == 9 || i == 10) {
					for (int j = 0; j < 2; j++) {
						glVertex2i(x + j, y + i);
					}
				}
			}
			glEnd();
			x = x + 5 + spacing;
		}
	}
}