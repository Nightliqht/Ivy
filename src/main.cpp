#include <glad/include/glad/gl.h>
#include <GLFW/glfw3.h>
#include <iostream>
#include <cmath>

using std::cout;
using std::endl;

enum dimensions {WIDTH = 1920, HEIGHT = 1080};

int main(void)
{
    GLFWwindow* window;

    glfwInit();

    window = glfwCreateWindow(WIDTH, HEIGHT, "Ivy", NULL, NULL);
    glfwMakeContextCurrent(window);


    gladLoadGL(glfwGetProcAddress);
    glViewport(0, 0, 1920, 1080);

    float centerX = static_cast<float>(WIDTH) /2.0f;
    float centerY = static_cast<float>(HEIGHT) /2.0f;
    float radius = 50.0f;
    int res = 1.0f;


    while (!glfwWindowShouldClose(window))
    { 
        
                 /*Render here */
        glClearColor(0.5f, 1.0f, 0.6f, 1.0f);
        glRecti(0,0,WIDTH/2, HEIGHT/2, BLACK);
        glClear(GL_COLOR_BUFFER_BIT);

        /* Swap front and back buffers */
        glfwSwapBuffers(window);

        /* Poll for and process events */
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}

