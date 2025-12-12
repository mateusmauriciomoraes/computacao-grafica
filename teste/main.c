//
//  main.cpp
//  ex00
//
//  Created by Administrador on 17/10/2024.
//  Copyright © 2024 Administrador. All rights reserved.
//  Exemplo 00 da disciplina de computação gráfica

#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <GLUT/glut.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

void Desenha(){
    glClearColor(0, 0, 0, 0);
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(0.7f, 1.0f, 0.5f);

    glBegin(GL_TRIANGLES);
        glVertex3f(-0.5, -0.5, 0);
        glVertex3f(0, 0.5, 0);
        glVertex3f(0.5, -0.5, 0);
        glEnd();

    glFlush();
}

void Inicializa(){
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(-1.0, 1.0, -1.0, 1.0);
    glMatrixMode(GL_MODELVIEW);
}

int main(int argc, char ** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Exemplo 00 - Esqueleto");
    glutDisplayFunc(Desenha);
    Inicializa();
    glutMainLoop();
}
