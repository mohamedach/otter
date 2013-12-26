#ifndef OTTER_CLEARHISTORYDIALOG_H
#define OTTER_CLEARHISTORYDIALOG_H

#include <QtWidgets/QDialog>

namespace Otter
{

namespace Ui
{
	class ClearHistoryDialog;
}

class ClearHistoryDialog : public QDialog
{
	Q_OBJECT

public:
	explicit ClearHistoryDialog(const QStringList &clearSettings, bool configureMode, QWidget *parent = NULL);
	~ClearHistoryDialog();

	QStringList getClearSettings() const;

protected:
	void changeEvent(QEvent *event);

protected slots:
	void clearHistory();

private:
	bool m_configureMode;
	Ui::ClearHistoryDialog *m_ui;
};

}

#endif