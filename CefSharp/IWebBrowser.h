// Copyright � 2010-2013 The CefSharp Project. All rights reserved.
//
// Use of this source code is governed by a BSD-style license that can be found in the LICENSE file.

#pragma once

#include "Stdafx.h"
#include "ConsoleMessageEventArgs.h"
#include "LoadCompletedEventArgs.h"

namespace CefSharp
{
    interface class IWebBrowser;

    /// <summary>
    /// A delegate type used to listen to LoadError messages.
    /// </summary>
    /// <param name="failedUrl">The URL that failed to load.</param>
    /// <param name="errorCode">The error code.</param>
    /// <param name="errorText">The error text.</param>
    public delegate void LoadErrorEventHandler(String^ failedUrl, int errorCode, String^ errorText);

    public interface class IWebBrowser
    {
        /// <summary>
        /// Event handler for receiving Javascript console messages being sent from web pages.
        /// </summary>
        event ConsoleMessageEventHandler^ ConsoleMessage;

        /// <summary>
        /// Event handler that will get called whenever page loading is complete.
        /// </summary>        
        event LoadCompletedEventHandler^ LoadCompleted;

        /// <summary>
        /// Event handler that will get called whenever a load error occurs.
        /// </summary>        
        event LoadErrorEventHandler^ LoadError;
    };
}
