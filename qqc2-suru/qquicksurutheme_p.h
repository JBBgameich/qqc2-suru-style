/****************************************************************************
**
** Copyright (C) 2017, 2018 Stefano Verzegnassi <stefano@ubports.com>
** Copyright (C) 2017 The Qt Company Ltd.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 3 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPLv3 included in the
** packaging of this file. Please review the following information to
** ensure the GNU Lesser General Public License version 3 requirements
** will be met: https://www.gnu.org/licenses/lgpl.html.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 2.0 or later as published by the Free
** Software Foundation and appearing in the file LICENSE.GPL included in
** the packaging of this file. Please review the following information to
** ensure the GNU General Public License version 2.0 requirements will be
** met: http://www.gnu.org/licenses/gpl-2.0.html.
**
****************************************************************************/

#ifndef QQUICKSURUTHEME_P_H
#define QQUICKSURUTHEME_P_H

#include <QtGui/qfont.h>
#include <QtQuickControls2/private/qquickproxytheme_p.h>

class QQuickSuruTheme :  public QQuickProxyTheme
{
public:
    explicit QQuickSuruTheme(QPlatformTheme *theme = nullptr);

    const QFont *font(Font type = SystemFont) const override;

private:
    QFont headingOne;
    QFont headingTwo;
    QFont headingThree;
    QFont headingFour;
    QFont headingFive;
    QFont headingSix;
    QFont body;
    QFont small;
    QFont strong;

    QFont systemFont;
    QFont groupBoxTitleFont;
    QFont tabButtonFont;
};

#endif // QQUICKSURUTHEME_P_H
