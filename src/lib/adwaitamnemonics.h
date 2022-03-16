/*************************************************************************
 * Copyright (C) 2014 by Hugo Pereira Da Costa <hugo.pereira@free.fr>    *
 *                                                                       *
 * This program is free software; you can redistribute it and/or modify  *
 * it under the terms of the GNU General Public License as published by  *
 * the Free Software Foundation; either version 2 of the License, or     *
 * (at your option) any later version.                                   *
 *                                                                       *
 * This program is distributed in the hope that it will be useful,       *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 * GNU General Public License for more details.                          *
 *                                                                       *
 * You should have received a copy of the GNU General Public License     *
 * along with this program; if not, write to the                         *
 * Free Software Foundation, Inc.,                                       *
 * 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA .        *
 *************************************************************************/

#ifndef ADWAITA_MNEMONICS_H
#define ADWAITA_MNEMONICS_H

#include "adwaitaqt_export.h"

#include <QApplication>
#include <QEvent>
#include <QObject>

namespace Adwaita
{
class ADWAITAQT_EXPORT Mnemonics : public QObject
{
    Q_OBJECT
public:
    //* constructor
    explicit Mnemonics(QObject *parent)
        : QObject(parent)
        , _enabled(true)
    {
    }

    //* destructor
    virtual ~Mnemonics()
    {
    }

    //* set mode
    void setMode(int);

    //* event filter
    virtual bool eventFilter(QObject *, QEvent *);

    //* true if mnemonics are enabled
    const bool &enabled() const
    {
        return _enabled;
    }

    //* alignment flag
    int textFlags() const
    {
        return _enabled ? Qt::TextShowMnemonic : Qt::TextHideMnemonic;
    }

protected:
    //* set enable state
    void setEnabled(bool);

private:
    //* enable state
    bool _enabled;
};

} // namespace Adwaita

#endif // ADWAITA_MNEMONICS_H
