#pragma once

#include "app.g.h"
#include "OpenGLES.h"
#include "openglespage.xaml.h"

namespace AppForOpenGLES2
{
    ref class App sealed
    {
    public:
        App();
        virtual void OnLaunched(Windows::ApplicationModel::Activation::LaunchActivatedEventArgs^ e) override;

    private:
        OpenGLESPage^ mPage;
        OpenGLES mOpenGLES;
    };
}
