#include <stdlib.h>
#include <GL/glut.h>
void DrawQuad() {
	glBegin(GL_QUADS);
	glVertex2f(-72., -170.);
	glVertex2f(72., -170.0);
	glVertex2f(72.0, 50.0);
	glVertex2f(-72., 50.);
	glEnd();
}
void drawatap() {
	glBegin(GL_QUADS);
	glColor3f(0.65, 0.16, 0.16);
	glVertex2f(0., 0.);
	glVertex2f(100., 0.);
	glVertex2f(100., 35.);
	glVertex2f(0., 35.);
	glEnd();
	glBegin(GL_TRIANGLES);
	glVertex2f(0., 35.);
	glVertex2f(50., 42.);
	glVertex2f(100., 35.);
	glEnd();
}

void tangga() {
	glBegin(GL_TRIANGLES);
	glVertex2f(144., -170.);
	glVertex2f(144., -200.);
	glVertex2f(800., -200.);

	glVertex2f(-144., -170.);
	glVertex2f(-144., -200.);
	glVertex2f(-800., -200.);
	glEnd();
}
void drawatapsamping() {

	glBegin(GL_TRIANGLES);
	glColor3f(0.65, 0.16, 0.16);
	glVertex2f(-72., 0.);
	glVertex2f(72., 0.);
	glVertex2f(0., 10.);
	glEnd();
}
void render() {
	glClearColor(0.8, 0.9, 1., 1.); //BIRU LANGIT
	glClear(GL_COLOR_BUFFER_BIT);
	//ATAP GEDUNG TENGAH
	glPushMatrix();
	glTranslatef(-50, 40, 0);
	drawatap();
	glPopMatrix();

	//GEDUNG KANAN
	//ATAP
	glPushMatrix();
	glTranslatef(225., -45., 0);
	glRotatef(5., 0., 0., 1.);
	glScalef(1.3, 1., 1.);
	drawatapsamping();
	glPopMatrix();

	//KOTAK SAMPING KANAN
	glPushMatrix();
	glColor3f(0.8, 0.8, 0.8);
	glTranslatef(238., -100., 0);
	glScalef(1.3, 1., 1.);
	DrawQuad();
	glPopMatrix();

	//KOTAK KACA TENGAH
	glPushMatrix();
	glColor3f(0.1, 0.5, 1.);
	glTranslatef(238., -100., 0);
	glRotatef(5., 0., 0., 1.);
	glScalef(0.7, 0.5, 1.);
	DrawQuad();
	glPopMatrix();

	//KOTAK PINTU
	glPushMatrix();
	glColor3f(0.2, 0.2, 0.2);
	glTranslatef(240., -170., 0);
	glRotatef(5., 0., 0., 1.);
	glScalef(0.2, 0.5, 1.);
	DrawQuad();
	glPopMatrix();

	//BAYANG BAYANG
	glPushMatrix();
	glColor3f(0.7, 0.7, 0.7);
	glTranslatef(229., -90., 0.);
	glRotatef(4., 0., 0., 1.);
	glScalef(1.3, 0.03, 1);
	DrawQuad();
	glPopMatrix();

	//TIANG
	glPushMatrix();
	glColor3f(1., 1., 1.);
	glTranslatef(165., -100., 0);
	glRotatef(5., 0., 0., 1.);
	glScalef(0.1, 0.5, 1.);
	DrawQuad();
	glTranslatef(400., 0., 0);
	DrawQuad();
	glTranslatef(600., 0., 0);
	DrawQuad();
	glPopMatrix();

	//GARIS LURUS
	glPushMatrix();
	glColor3f(1., 1., 1.);
	glTranslatef(229., -85., 0.);
	glRotatef(5., 0., 0., 1.);
	glScalef(1.3, 0.03, 1);
	DrawQuad();

	//KACA MIRING
	glColor3f(0.1, 0.5, 1.);
	glTranslatef(0., 1050., 0.);
	glScalef(1., 6., 1);
	DrawQuad();

	//GARIS LURUS ATAS
	glColor3f(1., 1., 1.);
	glScalef(1., -0.2, 1);
	glTranslatef(0., -120., 0.);
	DrawQuad();
	glPopMatrix();

	//PENYANGGA
	glPushMatrix();
	glColor3f(1., 1., 1.);
	glTranslatef(240., -125., 0.);
	glRotatef(5., 0., 0., 1.);
	glScalef(0.4, 0.05, 1);
	DrawQuad();
	glPopMatrix();

	//GEDUNG KIRI
	//ATAP
	glPushMatrix();
	glTranslatef(-225., -45., 0);
	glRotatef(-5., 0., 0., 1.);
	glScalef(1.3, 1., 1.);
	drawatapsamping();
	glPopMatrix();

	//KOTAK SAMPING KANAN
	glPushMatrix();
	glColor3f(0.8, 0.8, 0.8);
	glTranslatef(-238., -100., 0);
	glScalef(1.3, 1., 1.);
	DrawQuad();
	glPopMatrix();

	//KOTAK KACA TENGAH
	glPushMatrix();
	glColor3f(0.1, 0.5, 1.);
	glTranslatef(-238., -100., 0);
	glRotatef(-5., 0., 0., 1.);
	glScalef(0.7, 0.5, 1.);
	DrawQuad();
	glPopMatrix();

	//KOTAK PINTU
	glPushMatrix();
	glColor3f(0.2, 0.2, 0.2);
	glTranslatef(-240., -170., 0);
	glRotatef(-5., 0., 0., 1.);
	glScalef(0.2, 0.5, 1.);
	DrawQuad();
	glPopMatrix();

	//BAYANG BAYANG
	glPushMatrix();
	glColor3f(0.7, 0.7, 0.7);
	glTranslatef(-229., -90., 0.);
	glRotatef(-4., 0., 0., 1.);
	glScalef(1.3, 0.03, 1);
	DrawQuad();
	glPopMatrix();

	//TIANG
	glPushMatrix();
	glColor3f(1., 1., 1.);
	glTranslatef(-165., -100., 0);
	glRotatef(-5., 0., 0., 1.);
	glScalef(0.1, 0.5, 1.);
	DrawQuad();
	glTranslatef(-400., 0., 0);
	DrawQuad();
	glTranslatef(-600., 0., 0);
	DrawQuad();
	glPopMatrix();

	//GARIS LURUS
	glPushMatrix();
	glColor3f(1., 1., 1.);
	glTranslatef(-229., -85., 0.);
	glRotatef(-5., 0., 0., 1.);
	glScalef(1.3, 0.03, 1);
	DrawQuad();

	//KACA MIRING
	glColor3f(0.1, 0.5, 1.);
	glTranslatef(0., 1050., 0.);
	glScalef(1., 6., 1);
	DrawQuad();

	//GARIS LURUS ATAS
	glColor3f(1., 1., 1.);
	glScalef(1., -0.2, 1);
	glTranslatef(0., -120., 0.);
	DrawQuad();
	glPopMatrix();

	//PENYANGGA
	glPushMatrix();
	glColor3f(1., 1., 1.);
	glTranslatef(-240., -125., 0.);
	glRotatef(-5., 0., 0., 1.);
	glScalef(0.4, 0.05, 1);
	DrawQuad();
	glPopMatrix();

	//SAMPING-SAMPING
	glPushMatrix();
	glColor3f(0.9, 0.9, 0.9);
	glTranslatef(0., -102., 0);
	glScalef(2., 0.4, 1.);
	DrawQuad();
	glPopMatrix();

	//GEDUNG TENGAH KOTAK
	glColor3f(1., 1., 1.);
	DrawQuad();

	//PENYANGGA ABU KANAN KIRI
	glPushMatrix();
	glColor3f(0.6, 0.6, 0.6);
	glTranslatef(0., -102., 0);
	glScalef(1., 0.4, 1.);
	DrawQuad();
	glPopMatrix();

	//KOTAK BELAKANG SENDIRI
	glPushMatrix();
	glColor3f(1., 1., 1.);
	glTranslatef(0, 17, 0);
	glScalef(0.65, 1.06, 1.);
	DrawQuad();
	glPopMatrix();

	//KACA BESAR
	glPushMatrix();
	glColor3f(0.1, 0.5, 1.);
	glTranslatef(0, -8, 0);
	glScalef(0.8, 0.95, 1.);
	DrawQuad();
	glPopMatrix();

	//KOTAK TENGAH PUTIH
	glPushMatrix();
	glColor3f(1., 1., 1.);
	glTranslatef(0., -129., 0.);
	glScalef(0.8, 0.24, 1.);
	DrawQuad();
	glPopMatrix();

	//KOTAK PUTIH TENGAH
	glPushMatrix();
	glColor3f(1., 1., 1.);
	glScalef(0.47, 1.11, 1);
	glTranslatef(0, 16, 0);
	DrawQuad();
	glPopMatrix();

	//KOTAK MERAH
	glPushMatrix();
	glColor3f(0.85, 0.16, 0.16);
	glScalef(0.47, 0.26, 1);
	glTranslatef(0., -485., 0.);
	DrawQuad();
	glPopMatrix();

	//KOTAK KACA PALING TANGAH GEDUNG TENGAH
	glPushMatrix();
	glColor3f(0.1, 0.5, 1.);
	glTranslatef(0, 5, 0);
	glScalef(0.25, 1.03, 1.);
	DrawQuad();

	glColor3f(1., 1., 1.);
	glTranslatef(0., -15., 0.);
	glScalef(0.7, 0.005, 1.);
	DrawQuad();
	glTranslatef(0., -4000., 0.);
	DrawQuad();
	glTranslatef(0., -4100., 0.);
	DrawQuad();
	glTranslatef(0., -4000., 0.);
	DrawQuad();
	glPopMatrix();

	//KOTAK PUTIH TENGAH DIANTARA TIANG MERAH
	glPushMatrix();
	glColor3f(1., 1., 1.);
	glScalef(0.25, 0.26, 1);
	glTranslatef(0., -485., 0.);
	DrawQuad();
	//PINTU
	glColor3f(0.4, 0.4, 0.4);
	glScalef(0.7, 0.5, 1);
	glTranslatef(0., -175., 0.);
	DrawQuad();
	glScalef(0.5, 1., 1);
	glTranslatef(525., 0., 0.);
	DrawQuad();
	glColor3f(0.2, 0.2, 0.2);
	glScalef(1., 1., 1);
	glTranslatef(525., 0., 0.);
	DrawQuad();
	glTranslatef(325., 0., 0.);
	DrawQuad();

	glColor3f(0.4, 0.4, 0.4);
	glTranslatef(-1900., 0., 0.);
	DrawQuad();
	glColor3f(0.2, 0.2, 0.2);
	glTranslatef(-525., 0., 0.);
	DrawQuad();
	glTranslatef(-325., 0., 0.);
	DrawQuad();

	//JENDELA ATAS
	glTranslatef(0., 380., 0.);
	glScalef(0.5, 1., 1);
	DrawQuad();
	glTranslatef(650., 0., 0.);
	DrawQuad();
	glTranslatef(4200., 0., 0.);
	DrawQuad();
	glTranslatef(650., 0., 0.);
	DrawQuad();
	glPopMatrix();

	//LOGO
	glPushMatrix();
	glColor3f(1., 1., 1.);
	glScalef(0.17, 0.2, 1);
	glTranslatef(0, 200, 0);
	DrawQuad();
	glPopMatrix();

	glPushMatrix();
	glColor3f(0., 0., 0.8);
	glScalef(0.13, 0.17, 1);
	glTranslatef(0, 225, 0);
	DrawQuad();

	glColor3f(1., 0.8, 0.);
	glScalef(0.75, 0.7, 1);
	glTranslatef(0., 1., 0.);
	DrawQuad();
	glPopMatrix();

	//KACA-KACA BAGIAN KIRI
	glPushMatrix();
	glColor3f(0.1, 0.5, 1.);
	glScalef(0.06, 0.08, 1);
	glTranslatef(-425., 0., 0.);
	DrawQuad();
	glTranslatef(0., -300., 0.);
	DrawQuad();
	glTranslatef(0., -300., 0.);
	DrawQuad();
	glTranslatef(0., -300., 0.);
	DrawQuad();
	glTranslatef(0., -300., 0.);
	DrawQuad();
	glTranslatef(0., -300., 0.);
	DrawQuad();
	glPopMatrix();
	//KACA-KACA BAGIAN KANAN
	glPushMatrix();
	glColor3f(0.1, 0.5, 1.);
	glScalef(0.06, 0.08, 1);
	glTranslatef(425., 0., 0.);
	DrawQuad();
	glTranslatef(0., -300., 0.);
	DrawQuad();
	glTranslatef(0., -300., 0.);
	DrawQuad();
	glTranslatef(0., -300., 0.);
	DrawQuad();
	glTranslatef(0., -300., 0.);
	DrawQuad();
	glTranslatef(0., -300., 0.);
	DrawQuad();
	glPopMatrix();

	//KACA PALING KIRI MENTOK
	glPushMatrix();
	glColor3f(0.1, 0.5, 1.);
	glScalef(0.04, 0.08, 1);
	glTranslatef(-1630., 300., 0.);
	DrawQuad();
	glTranslatef(0., -300., 0.);
	DrawQuad();
	glTranslatef(0., -300., 0.);
	DrawQuad();
	glTranslatef(0., -300., 0.);
	DrawQuad();
	glTranslatef(0., -300., 0.);
	DrawQuad();
	glTranslatef(0., -300., 0.);
	DrawQuad();
	glTranslatef(0., -300., 0.);
	DrawQuad();
	glPopMatrix();
	//KACA PALING KANAN MENTOK
	glPushMatrix();
	glColor3f(0.1, 0.5, 1.);
	glScalef(0.04, 0.08, 1);
	glTranslatef(1630., 300., 0.);
	DrawQuad();
	glTranslatef(0., -300., 0.);
	DrawQuad();
	glTranslatef(0., -300., 0.);
	DrawQuad();
	glTranslatef(0., -300., 0.);
	DrawQuad();
	glTranslatef(0., -300., 0.);
	DrawQuad();
	glTranslatef(0., -300., 0.);
	DrawQuad();
	glTranslatef(0., -300., 0.);
	DrawQuad();
	glPopMatrix();

	//PENYANGGA ABU-ABU
	glPushMatrix();
	glColor3f(0.7, 0.7, 0.7);
	glTranslatef(0., -130., 0.);
	glScalef(2., 0.03, 1);
	DrawQuad();
	glColor3f(1., 1., 1.);
	glTranslatef(0., 1600., 0.);
	DrawQuad();
	glPopMatrix();

	//TANGGA DAN TULISAN UNIV
	glPushMatrix();
	glColor3f(0.1, 0.1, 0.1);
	glTranslatef(0., -220, 0);
	glScalef(2., 1., 1.);
	DrawQuad();
	//TULISAN
	glColor3f(1., 0.8, 0.);
	glTranslatef(0., -10, 0);
	glScalef(0.3, 1., 1.);
	DrawQuad();
	glColor3f(0.1, 0.1, 0.1);
	glTranslatef(0., -5., 0);
	glScalef(0.9, 1., 1.);
	DrawQuad();
	glPopMatrix();

	glPushMatrix();
	glColor3f(0.1, 0.1, 0.1);
	tangga();
	glPopMatrix();

	glFlush();

}

void main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DEPTH | GLUT_SINGLE | GLUT_RGBA);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(700, 400);
	glutCreateWindow("Rektorat Unesa - Romadhoni Kusuma Nanda");
	gluOrtho2D(-300., 300., -200., 200);
	glutDisplayFunc(render);
	glutMainLoop();
}