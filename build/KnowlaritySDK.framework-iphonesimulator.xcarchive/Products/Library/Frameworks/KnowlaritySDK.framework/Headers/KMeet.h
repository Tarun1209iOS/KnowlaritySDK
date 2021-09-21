//
//  KMeet.h
//  JitsiMeetSDK
//
//  Created by Tarun Tanwar on 24/08/21.
//  Copyright © 2021 Jitsi. All rights reserved.
//

#import <JitsiMeetSDK/JitsiMeetSDK.h>

NS_ASSUME_NONNULL_BEGIN

@interface KMeet : JitsiMeet

#pragma mark - This class is a singleton

- (JitsiMeet*)sharedInstance;

@end

NS_ASSUME_NONNULL_END
