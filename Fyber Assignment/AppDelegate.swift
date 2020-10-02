//
//  AppDelegate.swift
//  Fyber Assignment
//
//  Created by Jervin Cruz on 10/2/20.
//

import UIKit
import AdSupport

import CoreGraphics

import CoreLocation

import CoreTelephony

import MediaPlayer

import MessageUI

import MobileCoreServices

import QuartzCore

import Security

import StoreKit

import SystemConfiguration

import WebKit

import FairBidSDK


@main
class AppDelegate: UIResponder, UIApplicationDelegate {



    func application(_ application: UIApplication, didFinishLaunchingWithOptions launchOptions: [UIApplication.LaunchOptionsKey: Any]?) -> Bool {
        // Override point for customization after application launch.
        
        //Initialize Fyber SDK
        let userInfo = FairBid.user()
        userInfo.userId = "Jervin's ID"
        FairBid.start(withAppId: "114508")
        
        // Check if FairBid starts
        print(FairBid.isStarted())
        
        return true
    }

    // MARK: UISceneSession Lifecycle

    func application(_ application: UIApplication, configurationForConnecting connectingSceneSession: UISceneSession, options: UIScene.ConnectionOptions) -> UISceneConfiguration {
        // Called when a new scene session is being created.
        // Use this method to select a configuration to create the new scene with.
        return UISceneConfiguration(name: "Default Configuration", sessionRole: connectingSceneSession.role)
    }

    func application(_ application: UIApplication, didDiscardSceneSessions sceneSessions: Set<UISceneSession>) {
        // Called when the user discards a scene session.
        // If any sessions were discarded while the application was not running, this will be called shortly after application:didFinishLaunchingWithOptions.
        // Use this method to release any resources that were specific to the discarded scenes, as they will not return.
    }


}

