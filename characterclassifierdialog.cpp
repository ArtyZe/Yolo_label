#include "characterclassifierdialog.h"
#include "ui_characterclassifierdialog.h"

#include <QTextEncoder>

CharacterClassifierDialog::CharacterClassifierDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CharacterClassifierDialog)
{
    ui->setupUi(this);


    const char* strCharacters[] = {"0",
                            "1",
                            "2",
                            "3",
                            "4",
                            "5",
                            "6",
                            "7",
                            "8",
                            "9",
                            "��",
                            "��",
                            "��",
                            "��",
                            "��",
                           "��",
                           "��",
                           "��",
                           "��",
                           "��",
                           "��",
                           "��",
                           "��",
                           "��",
                           "��",
                           "��",
                           "��",
                           "��",
                           "��",
                           "��",
                           "��",
                           "��",
                           "��",
                           "��",
                           "��",
                           "��",
                           "��",
                           "��",
                           "��",
                           "ȣ",
                           "��",
                           "��",
                           "��",
                           "��",
                           "��",
                           "��",
                           "��",
                           "��",
                           "��",
                           "��",
                            "����",
                            "�λ�",
                            "�뱸",
                            "����",
                            "��õ",
                            "����",
                            "���",
                            "���",
                            "����",
                            "���",
                            "�泲",
                            "����",
                            "����",
                            "���",
                            "�泲",
                            "����",
                            "��",
                            "��",
                            "��",
                            "��",
                            "��",
                            "��",
                            "õ",
                            "��",
                            "��",
                            "��",
                            "��",
                            "��",
                            "û",
                            "��",
                            "��",
                            "��"
                            };

    for(const char* item: strCharacters)
        ui->listWidget->addItem(QString::fromLocal8Bit(item));

    //this->setStyleSheet("");
}

CharacterClassifierDialog::~CharacterClassifierDialog()
{
    delete ui;
}

int CharacterClassifierDialog::getCharacterIndex()
{
    return ui->listWidget->currentIndex().row();
}

void CharacterClassifierDialog::on_listWidget_itemClicked(QListWidgetItem *item)
{

}

void CharacterClassifierDialog::on_buttonBox_accepted()
{

}
