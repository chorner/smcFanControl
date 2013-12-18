//
//  FanUserNotify.m
//  smcFanControl
//
//  Created by Vik Ewoods on 9/19/13.
//
//

#import "FanUserNotify.h"

@implementation FanUserNotify

-(IBAction)pushNotificationToUserWithParams:(id)sender unTitle:(NSString *)a_title unText:(NSString *)a_text{
  NSUserNotification *notification = [[[NSUserNotification alloc] init] autorelease];
  notification.title = a_title;
  notification.informativeText = a_text;
  notification.actionButtonTitle = @"Close";
  notification.hasActionButton = YES;
  notification.soundName = NSUserNotificationDefaultSoundName;
  [[NSUserNotificationCenter defaultUserNotificationCenter] deliverNotification:notification];
}

@end