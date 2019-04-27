#include "lib/aboutapp.h"
#include "ui_aboutapp.h"

AboutApp::AboutApp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AboutApp)
{
    ui->setupUi(this);

    /* Выводим логотип */
    scene = new QGraphicsScene;
    imageLogo = new QPixmap("cncrun.png");
    scene->addPixmap(*imageLogo);
    ui->logo->setScene(scene);

    /* Выводим ссылку проекта */
    ui->labelLink->setText("<a href=\"https://github.com/vladislick/cnc_run_qt\">https://github.com/vladislick/cnc_run_qt</a>");
    ui->labelLink->setOpenExternalLinks(true);

    /* Выводим версию приложения */
    ui->appVersion->setText(APPVERSION);
}

AboutApp::~AboutApp()
{
    delete ui;
}

void AboutApp::on_pushButton_clicked()
{
    this->close();
}
