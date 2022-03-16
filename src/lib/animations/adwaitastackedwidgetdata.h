//////////////////////////////////////////////////////////////////////////////
// adwaitastackedwidgetdata.h
// data container for QStackedWidget transition
// -------------------
//
// Copyright (c) 2009 Hugo Pereira Da Costa <hugo.pereira@free.fr>
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to
// deal in the Software without restriction, including without limitation the
// rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
// sell copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
// FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
// IN THE SOFTWARE.
//////////////////////////////////////////////////////////////////////////////

#ifndef ADWAITA_STACKEDWIDGET_DATA_H
#define ADWAITA_STACKEDWIDGET_DATA_H

#include "adwaitatransitiondata.h"
#include "adwaitaqt_export.h"

#include <QStackedWidget>

namespace Adwaita
{
//! generic data
class ADWAITAQT_EXPORT StackedWidgetData : public TransitionData
{
    Q_OBJECT

public:
    //! constructor
    StackedWidgetData(QObject *, QStackedWidget *, int);

    //! destructor
    virtual ~StackedWidgetData()
    {
    }

protected Q_SLOTS:

    //! initialize animation
    virtual bool initializeAnimation();

    //! animate
    virtual bool animate();

    //! finish animation
    virtual void finishAnimation();

    //! called when target is destroyed
    virtual void targetDestroyed();

private:
    //! target
    WeakPointer<QStackedWidget> _target;

    //! current index
    int _index;
};

} // namespace Adwaita

#endif // ADWAITA_STACKEDWIDGET_DATA_H
