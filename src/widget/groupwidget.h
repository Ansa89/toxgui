/*
    Copyright © 2014-2015 by The qTox Project

    This file is part of qTox, a Qt-based graphical interface for Tox.

    qTox is libre software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    qTox is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with qTox.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef GROUPWIDGET_H
#define GROUPWIDGET_H

#include <QLabel>
#include "genericchatroomwidget.h"

class GroupWidget : public GenericChatroomWidget
{
    Q_OBJECT
public:
    GroupWidget(int GroupId, QString Name);
    void onUserListChanged();
    void contextMenuEvent(QContextMenuEvent * event);
    void setAsInactiveChatroom();
    void setAsActiveChatroom();
    void updateStatusLight();
    void setChatForm(Ui::MainWindow &);
    void resetEventFlags();
    void setName(const QString& name);
    QString getStatusString();

signals:
    void groupWidgetClicked(GroupWidget* widget);
    void removeGroup(int groupId);

protected:
    // drag & drop
    void dragEnterEvent(QDragEnterEvent* ev);
    void dropEvent(QDropEvent* ev);
    void keyPressEvent(QKeyEvent* ev);
    void keyReleaseEvent(QKeyEvent* ev);

public:
    int groupId;
};

#endif // GROUPWIDGET_H
