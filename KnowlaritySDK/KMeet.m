//
//  KMeet.m
//  JitsiMeetSDK
//
//  Created by Tarun Tanwar on 24/08/21.
//  Copyright © 2021 Jitsi. All rights reserved.
//

#import "KMeet.h"

@implementation KMeet

- (JitsiMeet*)sharedInstance {
    
    return JitsiMeet.sharedInstance;
}


@end
