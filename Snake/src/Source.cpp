#include <Windows.h>
#include "Shapes.h"
#include "Main.h"

void Rect(int x, int y, int angle, int length, int height, int red, int green, int blue);

void pregame();
void game();
bool gamestate = 1;

void KeyCallback(GLFWwindow* window, int key, int scancode, int action, int mods);

int main(void)
{

    pregame();

    GLFWwindow* window;

    /* Initialize the library */
    if (!glfwInit())
        return -1;

    /* Create a windowed mode window and its OpenGL context */
    window = glfwCreateWindow(windowwidth, windowheight, "Snake", NULL, NULL);
   
    glfwSetKeyCallback(window, KeyCallback);
    glfwSetInputMode(window, GLFW_STICKY_KEYS, 1);
    
    if (!window)
    {
        glfwTerminate();
        return -1;
    }

    /* Make the window's context current */
    glfwMakeContextCurrent(window);
    glOrtho(0, windowwidth, 0, windowheight, 0, 1);
    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(window))
    {

        /* Render here */
        glClear(GL_COLOR_BUFFER_BIT);


        game();

        if (gamestate == 0) {
            break;
        }


        /* Swap front and back buffers */
        glfwSwapBuffers(window);

        for (int i = 0; i < wait; i++) {

            Sleep(1);

            /* Poll for and process events */
            glfwPollEvents();
        }
    }

    glfwTerminate();
    return 0;
}

void KeyCallback(GLFWwindow* window, int key, int scancode, int action, int mods) {

    if (action == GLFW_PRESS) {
        switch (key) {
        case GLFW_KEY_W:
        case GLFW_KEY_UP:
            if (dir != 2) {
                dir = 0;
                
            }
            break;
        case GLFW_KEY_D:
        case GLFW_KEY_RIGHT:
            if (dir != 3) {
                dir = 1;
                
            }
            break;
        case GLFW_KEY_S:
        case GLFW_KEY_DOWN:
            if (dir != 0) {
                dir = 2;
            }
            break;
        case GLFW_KEY_A:
        case GLFW_KEY_LEFT:
            if (dir != 1) {
                dir = 3;
            }
            break;
        case GLFW_KEY_R:
            length = 1;
            state = 1;
            break;
        case GLFW_KEY_Q:
            gamestate = 0;
            break;
        }
    }
}