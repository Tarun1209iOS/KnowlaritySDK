//
//  KMeetViewDelegate.h
//  JitsiMeetSDK
//
//  Created by Tarun Tanwar on 24/08/21.
//  Copyright © 2021 Jitsi. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol KMeetViewDelegate <NSObject>

/**
 * Called when a conference was joined.
 *
 * The `data` dictionary contains a `url` key with the conference URL.
 */
- (void)conferenceJoined:(NSDictionary *)data;

/**
 * Called when the active conference ends, be it because of user choice or
 * because of a failure.
 *
 * The `data` dictionary contains an `error` key with the error and a `url` key
 * with the conference URL. If the conference finished gracefully no `error`
 * key will be present. The possible values for "error" are described here:
 * https://github.com/jitsi/lib-jitsi-meet/blob/master/JitsiConnectionErrors.js
 * https://github.com/jitsi/lib-jitsi-meet/blob/master/JitsiConferenceErrors.js
 */
- (void)conferenceTerminated:(NSDictionary *)data;

/**
 * Called before a conference is joined.
 *
 * The `data` dictionary contains a `url` key with the conference URL.
 */
- (void)conferenceWillJoin:(NSDictionary *)data;

/**
 * Called when entering Picture-in-Picture is requested by the user. The app
 * should now activate its Picture-in-Picture implementation (and resize the
 * associated `JitsiMeetView`. The latter will automatically detect its new size
 * and adjust its user interface to a variant appropriate for the small size
 * ordinarily associated with Picture-in-Picture.)
 *
 * The `data` dictionary is empty.
 */
- (void)enterPictureInPicture:(NSDictionary *)data;

/**
 * Called when a participant has joined the conference.
 *
 * The `data` dictionary contains a `participantId` key with the id of the participant that has joined.
 */
- (void)participantJoined:(NSDictionary *)data;

/**
 * Called when a participant has left the conference.
 *
 * The `data` dictionary contains a `participantId` key with the id of the participant that has left.
 */
- (void)participantLeft:(NSDictionary *)data;

/**
 * Called when audioMuted state changed.
 *
 * The `data` dictionary contains a `muted` key with state of the audioMuted for the localParticipant.
 */
- (void)audioMutedChanged:(NSDictionary *)data;

/**
 * Called when an endpoint text message is received.
 *
 * The `data` dictionary contains a `senderId` key with the participantId of the sender and a 'message' key with the content.
 */
- (void)endpointTextMessageReceived:(NSDictionary *)data;

/**
 * Called when a participant toggled shared screen.
 *
 * The `data` dictionary contains a `participantId` key with the id of the participant  and a 'sharing' key with boolean value.
 */
- (void)screenShareToggled:(NSDictionary *)data;

/**
 * Called when a chat message is received.
 *
 * The `data` dictionary contains `message`, `senderId` and  `isPrivate` keys.
 */
- (void)chatMessageReceived:(NSDictionary *)data;

/**
 * Called when the chat dialog is displayed/hidden.
 *
 * The `data` dictionary contains a `isOpen` key.
 */
- (void)chatToggled:(NSDictionary *)data;

/**
 * Called when videoMuted state changed.
 *
 * The `data` dictionary contains a `muted` key with state of the videoMuted for the localParticipant.
 */
- (void)videoMutedChanged:(NSDictionary *)data;


/**
 *
 * Adding events
 *
 */

- (void)prejoinExpired:(NSDictionary *)data;

 
- (void)prejoinEarly:(NSDictionary *)data;

 
- (void)prejoinOther:(NSDictionary *)data;

 
- (void)terminateApp:(NSDictionary *)data;


@end


NS_ASSUME_NONNULL_END
