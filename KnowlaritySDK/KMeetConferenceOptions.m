//
//  KMeetConferenceOptions.m
//  JitsiMeetSDK
//
//  Created by Tarun Tanwar on 24/08/21.
//  Copyright © 2021 Jitsi. All rights reserved.
//

#import "KMeetConferenceOptions.h"

@implementation KMeetConferenceOptions

#pragma mark - API

+ (instancetype)fromBuilder:(void (^)(JitsiMeetConferenceOptionsBuilder *))initBlock {
    
    JitsiMeetConferenceOptionsBuilder *builder = [[JitsiMeetConferenceOptionsBuilder alloc] init];
    initBlock(builder);
    return [[JitsiMeetConferenceOptions alloc] initWithBuilder:builder];
}

@end
