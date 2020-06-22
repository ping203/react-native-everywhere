#pragma once

#include "App.xaml.g.h"



namespace winrt::ReactNativeEverywhere::implementation
{
    struct App : AppT<App>
    {
        App() noexcept;
    };
} // namespace winrt::ReactNativeEverywhere::implementation


