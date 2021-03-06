/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>
#import "GSEventMonitor.h"
#import "MediaPlayer-Structs.h"

@class NSTimer, UIEventObservableWindow;

@interface MPInactivityMonitor : NSObject <GSEventMonitor> {
	double _inactivityDurationInterval;
	double _lastActivityTime;
	NSTimer* _timer;
	id _delegate;
	int _pendingMouseUpCount;
	float _referenceTolerance;
	CGPoint _referencePoint;
	UIEventObservableWindow* _window;
	unsigned _monitoring : 1;
	unsigned _ignorePendingMouseUp : 1;
}
-(id)initForWindow:(id)window inactivityDuration:(double)duration delegate:(id)delegate;
-(void)setActivityTolerance:(float)tolerance withReferencePoint:(CGPoint)referencePoint;
-(void)restartWithDuration:(double)duration;
-(void)eventObservableWindowWillDeallocate:(id)eventObservableWindow;
-(void)clearDelegate;
-(void)dealloc;
-(void)_clearTimer;
-(void)setIgnorePendingMouseUp:(BOOL)up;
-(void)_createNewTimer;
-(void)_postTimerFired;
-(void)startMonitoring;
-(void)stopMonitoring;
-(void)timerFired:(id)fired;
-(void)_coreEventObservableWindow:(id)window willSendEventAtPoint:(CGPoint)point;
-(void)eventObservableWindow:(id)window willSendEvent:(GSEventRef)event;
-(void)eventObservableWindow:(id)window willSendUIEvent:(id)event;
@end

