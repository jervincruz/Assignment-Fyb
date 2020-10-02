//
//  ViewController.swift
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

class ViewController: UIViewController, FYBRewardedDelegate {

    @IBOutlet weak var showAdButton: UIButton!
    @IBOutlet weak var rewardConfirmationMsg: UILabel!
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        // Hide Show Ad Button & Reward Confirmation Msg Label
        showAdButton.isHidden = true
        rewardConfirmationMsg.isHidden = true
                
        // Instantiate FYBRewarded Delegate & Placement ID
        FYBRewarded.delegate = MyRewardedDelegate()
        let placementId = "238329"
        
        // Check if reward is available, show button if true
        if FYBRewarded.isAvailable(placementId) {
            showAdButton.isHidden = false
            FYBRewarded.show(placementId)
        }
        
        // Show confirmation msg if user watched ad in full
        if ((FYBRewarded.delegate?.rewardedDidComplete?(placementId, userRewarded: true)) != nil) {
            rewardConfirmationMsg.isHidden = false
        }
        
    }
    
    // Request Rewarded Video [Button Action]
    @IBAction func requestRewardedVideo(_ sender: Any) {
        
        print("Request button clicked\n\n")
        let placementId = "238329"
        FYBRewarded.request(placementId)
    }

    
    // Show Ad [Button Action] (if available)
    @IBAction func showAd(_ sender: Any) {
        let placementId = "238329"
        if FYBRewarded.isAvailable(placementId) {
            FYBRewarded.show(placementId)
        }
    }
    
}


class MyRewardedDelegate: NSObject, FYBRewardedDelegate {
    
    func rewardedIsAvailable(_ placementName: String) {
        print("isAvailable")
        print("Placement Name: ", placementName)
    }
    
    func rewardedIsUnavailable(_ placementName: String) {
        print("isUnavailable")
        print("Placement Name: ", placementName)

    }
    
    func rewardedDidShow(_ placementName: String, impressionData: FYBImpressionData) {
        print("didShow")
        print("Placement Name: ", placementName)
    }
    
    func rewardedDidFail(toShow placementName: String, withError error: Error, impressionData: FYBImpressionData) {
        print("didFail")
        print("Placement Name: ", placementName)

    }
    
    func rewardedDidClick(_ placementName: String) {
        print("rewardedDidClick")
        print("Placement Name: ", placementName)

    }
    
    func rewardedDidComplete(_ placementName: String, userRewarded: Bool) {
        print("Placement Name: ", placementName)

    }
    
    func rewardedDidDismiss(_ placementName: String) {
        print("Did Dismiss")
        print("Placement Name: ", placementName)

    }
  
    func rewardedWillRequest(_ placementId: String) {
        print("Will Request")
        print("Placement Name: ", placementId)

    }

}
