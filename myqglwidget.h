#ifndef MYQGLWIDGET_H
#define MYQGLWIDGET_H

#include <QGLWidget>
#include <GL/glu.h>
class MyQGLWidget : public QGLWidget
{
    Q_OBJECT
public:
    explicit MyQGLWidget(QWidget *parent = nullptr);
    GLuint listCube,listTeapot,texture[5],texGround,list[3],texMercator,m_angle;
    GLUquadricObj* ground;
     GLUquadricObj *sphere;
    GLUquadricObj* p_obj;
    GLfloat eyey,eyer,eye,m_color;
    int door_flag,m_speed,m_radius,car_angle;

public:
    void create_tree(GLfloat x,GLfloat y,GLfloat z,GLfloat scale);
    void create_car(GLfloat R,GLfloat G,GLfloat B);
    void create_balloon(GLfloat x, GLfloat y, GLfloat z,GLfloat R, GLfloat G, GLfloat B,GLfloat scale);
    void create_tyre(GLfloat x,GLfloat y,GLfloat z,GLfloat scale);
    void create_car_part(GLfloat x,GLfloat y,GLfloat z,GLfloat rota,GLfloat scale,GLfloat R,GLfloat G,GLfloat B);
    void create_wall(GLfloat x,GLfloat y,GLfloat z,GLfloat rota);
    void create_desk_leg(GLfloat x,GLfloat y,GLfloat z,GLfloat scale);
    void create_desk(GLfloat x,GLfloat y,GLfloat z,GLfloat scale);
    void create_shadow(GLfloat x,GLfloat y,GLfloat z,GLfloat scale);
    void create_chair(GLfloat x,GLfloat y,GLfloat z,GLfloat scale);
    void create_bed(GLfloat x,GLfloat y,GLfloat z,GLfloat scale);
    void create_door();
    void loadTexture();
    void timerE();
protected:
    void initializeGL() override;
    void resizeGL(int w, int h) override;
    void paintGL() override;

signals:

};

#endif // MYQGLWIDGET_H
