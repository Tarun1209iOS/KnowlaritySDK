//
//  KMeetView.h
//  JitsiMeetSDK
//
//  Created by Tarun Tanwar on 24/08/21.
//  Copyright © 2021 Jitsi. All rights reserved.
//

#import <JitsiMeetSDK/JitsiMeetSDK.h>
#import "KMeetViewDelegate.h"

NS_ASSUME_NONNULL_BEGIN

@interface KMeetView : JitsiMeetView

@property (nonatomic, nullable, weak) id<KMeetViewDelegate> delegate;

@end

NS_ASSUME_NONNULL_END

