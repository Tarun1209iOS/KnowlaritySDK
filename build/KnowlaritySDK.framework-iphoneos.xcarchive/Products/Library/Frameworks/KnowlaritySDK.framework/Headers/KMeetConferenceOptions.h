//
//  KMeetConferenceOptions.h
//  JitsiMeetSDK
//
//  Created by Tarun Tanwar on 24/08/21.
//  Copyright © 2021 Jitsi. All rights reserved.
//

#import <JitsiMeetSDK/JitsiMeetSDK.h>

NS_ASSUME_NONNULL_BEGIN

@interface KMeetConferenceOptionsBuilder : JitsiMeetConferenceOptionsBuilder

@end

@interface KMeetConferenceOptions : JitsiMeetConferenceOptions

+ (instancetype _Nonnull)fromBuilder:(void (^_Nonnull)(KMeetConferenceOptionsBuilder *_Nonnull))initBlock;
- (instancetype _Nonnull)init NS_UNAVAILABLE;

@end



NS_ASSUME_NONNULL_END
